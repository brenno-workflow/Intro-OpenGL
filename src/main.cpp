#include "main.h"

int main()
{
    try
    {
        // Run
        OpenGL();
    }

    catch (const std::exception& error)
    {
        std::cerr << "\nERRO: " << error.what() << std::endl;
    }

    catch (...)
    {
        std::cerr << "\nERRO DESCONHECIDO." << std::endl;
    }

    std::cin.get();

    // End
    return 0;
}