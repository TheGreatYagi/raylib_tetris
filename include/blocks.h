#ifndef BLOCKS_H
#define BLOCKS_H
#pragma once

#include "raylib.h"

typedef struct {
    Texture2D rickyO; // --|
    // Texture2D rickyB; // |--
    // Texture2D cleveland; // z-left
    // Texture2D rhois; // z-right
    // Texture2D hero; // bar
    // Texture2D teewee; // -|-
    // Texture2D smashboy; // square
} BlocksMap;

BlocksMap buildBlocks();
void unloadMap(BlocksMap* map);




#endif