#include "raylib.h"

int main(void) {
    // width, height, title
    InitWindow(1200, 800, "FP-Raylib");

    SetTargetFPS(80);

    // Main game loop
    while (!WindowShouldClose()) { // Detect window close or ESC
        BeginDrawing();
            ClearBackground(RAYWHITE);
            DrawText("Hello from Raylib!", 190, 200, 30, DARKGRAY);
        EndDrawing();
    }

    CloseWindow();
    return 0;
}
