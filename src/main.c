#include "raylib.h"
#include "ui.h"

const int height = 800;
const int width = 900;

int menu = 1;


int main() {
    InitWindow(width, height, "Tetris!");
    SetTargetFPS(15);

    while (!WindowShouldClose()) {
        //game loop

        if(menu) { 
            drawUIMainMenu(&menu);
            continue;
        }
        drawUI();

    }
}