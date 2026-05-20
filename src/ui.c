#include "ui.h"


int help = 0;

void drawUI() {
// this will draw the base game UI
// Includes game window, score, next peice
    BeginDrawing();
    ClearBackground(BLACK);
    //Define sides
    DrawRectangle(0,0,GetScreenWidth()/4, GetScreenHeight(), BLUE);
    DrawText("Should now be in game", GetScreenHeight()/2, GetScreenWidth()/2, 20, MAROON);
    EndDrawing();
}

void drawUIGame() {
// draw the actual game itself
// includes shapes, 

}

TextureMap initTextures() {
    TextureMap tmp = {
        LoadTexture("assets/images/TitleScreen.png"),
        LoadTexture("assets/images/Help.png")
    };
    return tmp;
}

void unloadTextureMap(TextureMap* map) {
    UnloadTexture(map->menuTexture);
    //map->menuTexture = (Texture2D) NULL;
    UnloadTexture(map->helpTexture);
    //map->helpTexture = (Texture2D) NULL;
}

void drawHelp(int* state, TextureMap* map) {
    // display the game controls

    BeginDrawing();
    ClearBackground(WHITE);
    DrawTexture(map->helpTexture,0,0,WHITE);
    // DrawText("Use <- and -> to move peice left and right", GetScreenWidth()/2-200, GetScreenHeight()/2-100, 25, RAYWHITE);
    // DrawText("Use down arrow to speed up piece", GetScreenWidth()/2-200, GetScreenHeight()/2-50, 25, RAYWHITE);
    // DrawText("Use q and e to rotate left and right", GetScreenWidth()/2-200, GetScreenHeight()/2, 25, RAYWHITE);
    // DrawText("Press x to return to menu!", GetScreenWidth()/2-200, GetScreenHeight()/2+50, 25, RAYWHITE);
    if (GetKeyPressed() == KEY_X) {
        *state = 0;
    }
    EndDrawing();
}

void drawUIMainMenu(int* state, TextureMap* map) {
    BeginDrawing();
    ClearBackground(RAYWHITE);
    DrawTexture(map->menuTexture,0,0,WHITE);
    int pressed = GetKeyPressed();
    if (pressed == KEY_ENTER) {
        *state = 0;
        //drawUI();
    }
    if (pressed == KEY_H) {
        if (help == 0) {
            help = 1;
        }
        EndDrawing();
        while(help){
            drawHelp(&help, map);
        }
    }
    
    EndDrawing();
}

void drawUIPause() {

}