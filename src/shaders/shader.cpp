#include "shader.h"

// Load
string Shader::Load(const char* __path)
{

    // File
    ifstream __file(__path);

    // Abrir
    if (!__file.is_open())
    {
        throw std::runtime_error("Erro ao abrir shader.");
    }

    stringstream __buffer;
    __buffer << __file.rdbuf();

    return __buffer.str();
}