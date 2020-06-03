#include "Paramedic.hpp"
#include <iostream>

using namespace std;

    Paramedic::Paramedic()
    {
        cout << "Paramedic ctor" << endl;
    }

    Paramedic::Paramedic(int p_num) : Soldier(p_num)
    {
        cout << "Paramedic ctor(int)" << endl;
    }

    Paramedic::~Paramedic()
    {
        cout << "Paramedic dtor" << endl;
    }

    void Paramedic::move()
    {
        cout << "Paramedic moving..." << endl;
        
    }

    void Paramedic::shoot()
    {
        cout << "Paramedic shooting..." << endl;
    }

    std::string Paramedic::printType()
    {
        return "P_";
    }