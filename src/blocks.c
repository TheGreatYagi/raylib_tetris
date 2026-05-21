#include "blocks.h"

BlocksMap buildBlocks() {
   BlocksMap tmp = {
    LoadTexture("assets/images/rickyO.png")
   };
   return tmp;
}

void unloadMap(BlocksMap* map) {
    UnloadTexture(map->rickyO);
}