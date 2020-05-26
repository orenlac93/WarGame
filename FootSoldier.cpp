#include "FootSoldier.hpp"
#include <iostream>

using namespace std;

    FootSoldier::FootSoldier()
    {
        cout << "FootSoldier ctor" << endl;
    }

    FootSoldier::FootSoldier(int p_num) : Soldier(p_num)
    {
        cout << "FootSoldier ctor(int)" << endl;
    }

    FootSoldier::~FootSoldier()
    {
        cout << "FootSoldier dtor" << endl;
    }

    void FootSoldier::move()
    {
        cout << "FootSoldier moving..." << endl;
    }

    void FootSoldier::shoot()
    {
        cout << "FootSoldier shooting..." << endl;
    }