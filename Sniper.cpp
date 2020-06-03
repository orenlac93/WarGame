#include "Sniper.hpp"
#include <iostream>

using namespace std;

    Sniper::Sniper()
    {
        cout << "Sniper ctor" << endl;
    }

    Sniper::Sniper(int p_num) : Soldier(p_num)
    {
        cout << "Sniper ctor(int)" << endl;
    }

    Sniper::~Sniper()
    {
        cout << "Sniper dtor" << endl;
    }

    void Sniper::move()
    {
        cout << "Sniper moving..." << endl;
        
    }

    void Sniper::shoot()
    {
        cout << "Sniper shooting..." << endl;
    }

    std::string Sniper::printType()
    {
        return "S_";
    }