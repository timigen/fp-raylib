#include "raylib.h"

int main(void) {
    SetConfigFlags(FLAG_FULLSCREEN_MODE);

    // width, height, title
    InitWindow(1, 1, "FP-Raylib");

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
