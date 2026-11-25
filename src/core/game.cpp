#include "game.h"

// Game
void OpenGL()
{
    // Class
    Window window;
    Obj obj;

    // Window Open
    window.Start();

    // Inicializar
    window.Shader();
    obj.Buffer();

    // Game Loop
    while(!glfwWindowShouldClose(window.__window))
    {
        // Background
        window.Background();

        // Program
        window.Program();

        // Object
        obj.Bind();
        obj.Draw();

        // --- Game Logic ---

        // Updating

        // Event

        // Drawing

        // ---
        
        // Update
        window.Update();
    }

    // Window Close
    window.End();
}
