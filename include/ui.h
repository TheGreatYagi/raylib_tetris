#ifndef UI_H
#define UI_H
#pragma once

#include "raylib.h"
#include <stdio.h>

extern const int sides;
extern const int floorCeil;

typedef struct TextureMap {
    Texture2D menuTexture;
    Texture2D helpTexture;
    //Texture2D* gameTexture;
} TextureMap;

void drawUIMainMenu(int* state, TextureMap* map);
TextureMap initTextures();
void unloadTextureMap(TextureMap* map);
void drawUIGame();
void drawUIPause();
void drawUI();
void updateUI();
void drawHelp(int* state, TextureMap* map);

#endif