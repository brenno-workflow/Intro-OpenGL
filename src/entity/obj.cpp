#include "obj.h"

// Buffer
void Obj::Buffer()
{
    // Buffers
    glGenVertexArrays(1, &VAO); // VAO - Vertex Array Object
    glGenBuffers(1, &VBO); // VBO - Vertex Buffer Object

    // Bind
    glBindVertexArray(VAO);
    glBindBuffer(GL_ARRAY_BUFFER, VBO);
    glBufferData(GL_ARRAY_BUFFER, sizeof(__vertex), __vertex, GL_STATIC_DRAW);

    // Vertex
    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(float), (void*)0);
    glEnableVertexAttribArray(0);
    glBindBuffer(GL_ARRAY_BUFFER, 0);
    glBindVertexArray(0);
}

// Bind
void Obj::Bind()
{
    glBindVertexArray(VAO);
}

// Draw
void Obj::Draw()
{
    glDrawArrays(GL_TRIANGLES, 0, 3);
}