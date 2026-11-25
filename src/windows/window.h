#pragma once

// utils
using namespace std;

// lib
#include <print>
#include <iostream>
#include <cmath>

// OpenGL
#include <glad/gl.h>
#include <GLFW/glfw3.h>

// src
#include "../shaders/shader.h"

// Class
class Window
{

    // Public
    public:

        // Class
        Shader shader;

        // Variables
        GLFWwindow* __window;

        int __height = 720;
        int __width = 1280;

        GLuint __vertex_shader = 0;
        GLuint __fragment_shader = 0;
        GLuint __shader_program = 0;

        string __vertex_source;
        string __fragment_source;

        //GLuint __vertex_shader = glCreateShader(GL_VERTEX_SHADER);
        //string __vertex_source = shader.Load("shaders/shader.vert");
        //GLuint __fragment_shader = glCreateShader(GL_FRAGMENT_SHADER);
        //string __fragment_source = shader.Load("shaders/shader.frag");
        //GLuint __shader_program = glCreateProgram();

        // Functions
        void Start();
        void End();
        void Update();
        void Background();
        void Shader();
        void Program();
};