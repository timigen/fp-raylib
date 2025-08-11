#include "raylib.h"

int main(void) {
    // Init window: width, height, title
    InitWindow(800, 450, "Hello, Raylib!");

    SetTargetFPS(60); // Run at 60 frames per second

    // Main game loop
    while (!WindowShouldClose()) { // Detect window close or ESC
        BeginDrawing();
            ClearBackground(RAYWHITE);
            DrawText("Hello from Raylib!", 190, 200, 30, DARKGRAY);
        EndDrawing();
    }

    CloseWindow(); // Clean up
    return 0;
}
