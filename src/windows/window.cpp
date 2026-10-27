#include "window.h"

// Public

// Start
void Window::Start()
{
    // inicializa a biblioteca que cria a janela
    glfwInit();

    // solicita um contexto OpenGL 3.3
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);

    // cria uma janela
    __window = glfwCreateWindow(__width, __height, "Janela1", nullptr, nullptr);

    // associa o contexto OpenGL à janela
    glfwMakeContextCurrent(__window);

    // carrega as funções do OpenGL
    gladLoadGL(reinterpret_cast<GLADloadfunc>(glfwGetProcAddress));
}

// End
void Window::End()
{
    // encerra a GLFW
    glfwTerminate();
}