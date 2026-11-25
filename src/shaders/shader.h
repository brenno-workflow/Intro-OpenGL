#pragma once

// utils
using namespace std;

// OpenGL
#include <glad/gl.h>
#include <GLFW/glfw3.h>

#include <string>
#include <fstream>
#include <sstream>
#include <stdexcept>

// Class
class Shader{

    // Public
    public:

        // Variables

        // Functions
        string Load(const char* __path);
};