#include "davinci.h"
#include "tank.h"
#include <windows.h>
#include <iostream>
using namespace std;


DaVinci::DaVinci()
{

}
void DaVinci::gotoxy(int x, int y)
{
   HANDLE hndl=GetStdHandle(STD_OUTPUT_HANDLE);


   COORD coord;
   coord.X=static_cast<SHORT>(x);
   coord.Y=(SHORT)y;
   SetConsoleCursorPosition(hndl,coord);
}
void DaVinci::draw(const Tank*  const pTanks, const int N)
{
    system("cls");
  for(int i=0; i<N; i++)
  {
   Point coord =pTanks[i].getCoord();
   gotoxy(coord.x,coord.y);
   cout<< '*';
  }
  Sleep(50);
}
