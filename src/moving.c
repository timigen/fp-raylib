#include "raylib.h"
#include <stdio.h>

int main(void) {

    const float SPEED = 5.0f;
    const float RADIUS = 10.0f;
    const int FONT_SIZE = 10;
    const int TARGET_FPS = 80;

    SetConfigFlags(FLAG_FULLSCREEN_MODE);
    InitWindow(0, 0, "FP-Raylib");
    const int WIDTH = GetRenderWidth();
    const int HEIGHT = GetRenderHeight();
    SetTargetFPS(TARGET_FPS);

    // Circle properties
    Vector2 circlePos = { WIDTH / 2.0f, HEIGHT / 2.0f }; // Starting position

    printf("SCREEN: %d x %d", WIDTH, HEIGHT);

    while (!WindowShouldClose()) {

        // --- Input ---
        if (IsKeyDown(KEY_RIGHT)) circlePos.x += SPEED;
        if (IsKeyDown(KEY_LEFT))  circlePos.x -= SPEED;
        if (IsKeyDown(KEY_DOWN))  circlePos.y += SPEED;
        if (IsKeyDown(KEY_UP))    circlePos.y -= SPEED;

        // --- Draw ---
        BeginDrawing();
            ClearBackground(BLACK);
            DrawCircleV(circlePos, RADIUS, RED);
            DrawFPS(10, 10);
            DrawText(TextFormat("%d x %d", WIDTH, HEIGHT), 10, 30, FONT_SIZE, RED);
            DrawText("Move the circle with arrow keys or esc to exit ", 10, HEIGHT - 25, FONT_SIZE, RAYWHITE);
        EndDrawing();
    }

    CloseWindow();
    return 0;
}
