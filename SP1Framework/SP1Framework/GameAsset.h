#ifndef _GAME_ASSET
#define _GAME_ASSET

#include "Framework\console.h"
#include "game.h"

using namespace std;

void getMovingTrapPos(bool &bGotTrapPos, char map[100][100], struct SGameTrap MovingTrap[8]);
void renderMovingTrap(Console &g_Console, struct SGameTrap g_sMovingTrap[8]);
void movingTrap(double &trapTime, struct SGameTrap g_sMovingTrap[8]);
void renderFallingTrap(Console &g_console);
void renderCharacter(Console &g_Console, struct SGameChar playerInfo);
void initMovingTrap(struct SGameTrap g_sMovingTrap[8]);

void FanFunctionLeft(struct SGameChar &playerInfo, char mapStorage[100][100]);							 // Left fan function (movement & some checking)
void FanFunctionRight(struct SGameChar &playerInfo, char mapStorage[100][100], Console &g_console);		 // Right fan function (movement & some checking)
void FanFunctionUp(struct SGameChar &playerInfo, char mapStorage[100][100]);							 // Up fan function (movement & some checking)
void FanFunctionDown(struct SGameChar &playerInfo, char mapStorage[100][100], Console &g_console);		 // Down function (movement & some checking)
void FanFunctionMain(struct SGameChar &playerInfo, char mapStorage[100][100], Console &g_console);		 // Main fan function (checking)

void ArrayLevelOneDetect(struct SGameChar &playerInfo, int ChangesArrayOne[50]); // traps array detection (WIP)
void ArrayLevelOneActivate(struct SGameChar &playerInfo, int ChangesArrayOne[50], char mapStorage[100][100]); // traps array activate (WIP)

#endif