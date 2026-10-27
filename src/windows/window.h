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

// Class
class Window{

    // Public
    public:

        // Variables
        GLFWwindow* __window;
        int __height = 720;
        int __width = 1280;
        int __fps = 60;
        int __grid_size = 30;
        int __grid_count = 25;
        int __score = 0;

        // Functions
        void Start();
        void End();
};