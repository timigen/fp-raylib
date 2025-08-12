#include "raylib.h"
#include <stdio.h>

int main(void) {
    SetConfigFlags(FLAG_FULLSCREEN_MODE);
    InitWindow(0, 0, "FP-Raylib");
    int width = GetRenderWidth();
    int height = GetRenderHeight();
    SetTargetFPS(80);

    // Circle properties
    Vector2 circlePos = { width / 2.0f, height / 2.0f }; // Starting position
    float circleRadius = 10;
    float speed = 5.0f;

    printf("SCREEN: %d x %d", width, height);

    while (!WindowShouldClose()) {

        // --- Input ---
        if (IsKeyDown(KEY_RIGHT)) circlePos.x += speed;
        if (IsKeyDown(KEY_LEFT))  circlePos.x -= speed;
        if (IsKeyDown(KEY_DOWN))  circlePos.y += speed;
        if (IsKeyDown(KEY_UP))    circlePos.y -= speed;

        // --- Draw ---
        BeginDrawing();
            ClearBackground(BLACK);
            DrawCircleV(circlePos, circleRadius, RED);
            DrawFPS(10, 10);
            DrawText(TextFormat("%d x %d", width, height), 10, 30, 10, RED);
            DrawText("Move the circle with arrow keys or esc to exit ", 10, height - 25, 18, RAYWHITE);
        EndDrawing();
    }

    CloseWindow();
    return 0;
}
