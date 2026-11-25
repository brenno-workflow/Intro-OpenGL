#pragma once

// utils
using namespace std;
#include <cmath>

// OpenGL
#include <glad/gl.h>
#include <GLFW/glfw3.h>

// src
#include "../shaders/shader.h"

// Class
class Obj{

    // Public
    public:

        // Class
        Shader shader;

        // Variables
        GLfloat __vertex[9] =
        {
            0.0f,  0.5f * float(sqrt(3)) / 3, 0.0f,      // Topo
            -0.5f, -0.5f * float(sqrt(3)) / 3, 0.0f,     // Inferior esquerdo
            0.5f, -0.5f * float(sqrt(3)) / 3, 0.0f       // Inferior direito
        };

        //GLuint VAO, VBO;

        GLuint VAO = 0;
        GLuint VBO = 0;

        // Functions
        void Buffer();
        void Bind();
        void Draw();
};