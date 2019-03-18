#ifndef TANK_H
#define TANK_H
#include <iostream>

using namespace std;
struct Point
{
 int x;
 int y;
};

class Tank
{
    public:
        Tank(string name="lol",int hp=100, int dmg=50);
    Tank(const Tank & otherTank);
       void shoot(Tank & otherTank);
       void show() const;
        void protect();
        void showPosition() const;
        void move();
        Point getCoord() const;
        Tank operator+(int hp);
        Tank operator-(int hp);
        ~Tank();
       Tank& operator=(const Tank & otherTank);



    protected:
    private:
        string m_name;
        int m_hp;
        int m_damage;
        Point m_position;
       // char * pWeapon;
};

Tank* createTanks(int N);
void deleteTanks(Tank* pTanks);

#endif // TANK_H
