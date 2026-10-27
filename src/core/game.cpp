#include "game.h"

// Game
void OpenGL()
{
    // Class
    Window window;

    // Variables

    // Window Open
    window.Start();

    // Game Loop
    while(!glfwWindowShouldClose(window.__window))
    {
        glfwSwapBuffers(window.__window);
        glfwPollEvents();       
    }

    // Window Close
    window.End();
}
