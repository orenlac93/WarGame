#include"Soldier.hpp"
#include<iostream>

using namespace std;

Soldier::Soldier()
{
    cout << "Soldier ctor" << endl;
}

Soldier::Soldier(uint p_num)
{
    this->player_num = p_num;
    cout << "Soldier ctor(int)" << endl;
}

Soldier::~Soldier()
{
    cout << "Soldier dtor" << endl;
}

int Soldier::get_p_num() const
{
    return this->player_num;
}

void Soldier::move()
{
    cout << "Soldier moving..." << endl;
}
