#ifndef DAVINCI_H
#define DAVINCI_H
#include "tank.h"

class DaVinci
{
public:
    DaVinci();

    void draw(const Tank* pTanks, const int N);

private:
    void gotoxy(int x, int y);
};

#endif // DAVINCI_H
