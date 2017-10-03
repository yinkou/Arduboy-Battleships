#ifndef BSPLAYER_H
#define BSPLAYER_H
#include <Arduboy2.h>
#include "BSMapTileData.h"

class BSPlayer{
public:
  BSPlayer();

  // Resets the player data
  void resetPlayer();

  // Stores a ship to the map
  void writeShipToMap(uint8_t posX, uint8_t posY, uint8_t length, uint8_t shipIndex, bool vertical);

  // Returns true if the given ship collides either with a mountain or other ship.
  bool detectShipCollisionOnMap(uint8_t posX, uint8_t posY, uint8_t length, bool vertical);

  // getter and setter for a tile on the map.
  // A tile is represented by 2 Bytes, see BSMapTileData.h for more info.
  uint16_t getMapTileAtPosition(uint8_t x, uint8_t y);
  void setMapTileAtPosition(uint8_t x, uint8_t y, uint16_t mapTileData);

private:
  // stores the players map
  uint16_t playerMap[BS_MAP_SIZE][BS_MAP_SIZE] = {{0}};
};

#endif