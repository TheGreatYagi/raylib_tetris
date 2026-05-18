#ifndef UI_H
#define UI_H
#pragma once

#include "raylib.h"
#include <stdio.h>

extern const int sides;
extern const int floorCeil;

void drawUIMainMenu(int* state);
void drawUIGame();
void drawUIPause();
void drawUI();
void updateUI();
void drawHelp(int* state);

#endif