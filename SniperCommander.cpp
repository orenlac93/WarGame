#include"SniperCommander.hpp"
#include<iostream>

using namespace std;

    SniperCommander::SniperCommander()
    {
        cout << "SniperCommander ctor" << endl;
    }

    SniperCommander::SniperCommander(int p_num) : Sniper(p_num)
    {
        cout << "SniperCommander ctor(int)" << endl;
    }

    SniperCommander::~SniperCommander()
    {
        cout << "SniperCommander dtor" << endl;
    }

    void SniperCommander::move()
    {
        cout << "SniperCommander moving..." << endl;
    }
        
    void SniperCommander::shootAll()
    {
        cout << "SniperCommander shootAll()" << endl;
    }

    std::string SniperCommander::printType()
    {
        return "SC";
    }