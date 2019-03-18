#ifndef GAME_H
#define GAME_H
#include "tank.h"
#include "davinci.h"

const int Num_tanks= 20;

class Game
{
   bool m_m;
   Tank* m_pTanks; //pointer to tank's array
   DaVinci m_painter;
public:
    void start();
    void stop();
    Game();
    ~Game();
};

#endif // GAME_H
