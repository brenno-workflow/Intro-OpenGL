#include "window.h"

// Public

// Start
void Window::Start()
{
    // Inicializar GLFW
    glfwInit();

    // Informar versão do OpenGL
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    // Cria janela
    __window = glfwCreateWindow(__width, __height, "Janela", NULL, NULL);

    // Associa o contexto OpenGL à janela
    glfwMakeContextCurrent(__window);

    // Carrega as funções do OpenGL
    gladLoadGL(reinterpret_cast<GLADloadfunc>(glfwGetProcAddress));

}

// End
void Window::End()
{
    // Encerra o GLFW
    glfwTerminate();
}

// Update
void Window::Update()
{
    glfwSwapBuffers(__window);
    glfwPollEvents();
}

// Backgorund
void Window::Background()
{
    glClearColor(0.1f, 0.2f, 0.4f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT); // The GL_COLOR_BUFFER_BIT parameter means that the clear call will affect the color buffer, causing it to be cleared to the current clearing color we set in the previous function.
}

// Shader
void Window::Shader()
{
    // Vertex
    __vertex_shader = glCreateShader(GL_VERTEX_SHADER);
    __vertex_source = shader.Load("../../src/shaders/shader.vert");
    const char* __vertex_source_ptr = __vertex_source.c_str();
    glShaderSource(__vertex_shader, 1, &__vertex_source_ptr, NULL);
    glCompileShader(__vertex_shader);

    // Fragment
    __fragment_shader = glCreateShader(GL_FRAGMENT_SHADER);
    __fragment_source = shader.Load("../../src/shaders/shader.frag");
    const char* __fragment_source_ptr = __fragment_source.c_str();
    glShaderSource(__fragment_shader, 1, &__fragment_source_ptr, NULL);
    glCompileShader(__fragment_shader);

    // Program
    __shader_program = glCreateProgram();
    glAttachShader(__shader_program, __vertex_shader);
    glAttachShader(__shader_program, __fragment_shader);
    glLinkProgram(__shader_program);

    // Deletar shaders
    glDeleteShader(__vertex_shader);
    glDeleteShader(__fragment_shader);
}

// Program
void Window::Program()
{
    // Inicia o programa
    glUseProgram(__shader_program);

}