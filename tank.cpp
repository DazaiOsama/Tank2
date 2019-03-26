#include "tank.h"
#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

void Tank::move()
{
    int moveVectorX = rand()%3 -1;
    int moveVectorY = rand()%3 -1;
m_position.x+=moveVectorX;
m_position.y+=moveVectorY;
}



Tank* createTanks(int N)
{
    Tank* pArrTanks= new Tank[N];
    return pArrTanks;
}
void deleteTanks(Tank* pTanks)
{
    delete [] pTanks;
}

Tank::Tank(string name,int hp, int dmg)
{
m_name=name;
m_hp=hp;
m_damage=dmg;
m_position.x=rand()%50;
m_position.y=rand()%10;
//pWeapon = new char[50];
//strcpy(pWeapon,"Mini lol");

}
Tank::Tank(const Tank & otherTank)
{
    this->m_name=otherTank.m_name;
    this->m_hp=otherTank.m_hp;
    this->m_damage=otherTank.m_damage;

}

Tank::~Tank()
{
    cout<<"Destructor for T, x= "<<endl;
    cout<<m_position.x<<endl;
   // delete  [] pWeapon;
}

void Tank::shoot(Tank & otherTank)
{
    otherTank.m_hp -=this->m_damage;
}

void Tank::show() const
{
    if(m_hp<=0)
    {
        cout<<" name-"<<m_name<<"-dead"<<endl;
    }
    else if(m_hp>0){
    cout<<" name="<<m_name<<endl;
    cout << "HP = "<<m_hp<< endl;
    cout << "DMG = " << m_damage << endl;}
}
Point Tank::getCoord()const
{
    return m_position;
}

void Tank::protect()
{
    if(m_damage<0)
    {
    m_damage=m_damage*-1;
    }
}
void Tank::showPosition() const
{
    cout<<"Position x= "<<m_position.x<<endl<<endl;
    cout<<"Position y= "<<m_position.y<<endl<<endl;
}
Tank& Tank::operator= (const Tank & otherTank)
{
if(this == &otherTank){
    return *this;
}
this->m_hp = otherTank.m_hp;
m_damage=otherTank.m_damage;
m_position= otherTank.m_position;
m_name = otherTank.m_name;

return *this;
}
Tank Tank::operator+(int hp)
{
    Tank newTank(*this);
    newTank.m_hp +=hp;
    return newTank;

}
Tank Tank::operator-(int hp)
{
    Tank newTank(*this);
    newTank.m_hp -=hp;
    return newTank;

}
