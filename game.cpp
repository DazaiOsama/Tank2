#include "game.h"
#include "davinci.h"
Game::Game() : m_m(true)
{
m_pTanks = createTanks(Num_tanks);
}
Game::~Game()
{
  deleteTanks(m_pTanks);
}
void Game::start()
{

 while(m_m)
 {
  for(int i=0;i<Num_tanks;i++)
        {
        m_pTanks[i].move();
        }
m_painter.draw(m_pTanks,Num_tanks);
m_pTanks[1].show();
m_pTanks[0] = m_pTanks[0] + 20;
m_pTanks[1] = m_pTanks[1] - 1;
 }

}

void Game::stop()
{
  m_m=false;
}
