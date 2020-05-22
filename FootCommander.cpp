#include"FootCommander.hpp"
#include<iostream>

using namespace std;

    FootCommander::FootCommander()
    {
        cout << "FootCommander ctor" << endl;
    }

    FootCommander::FootCommander(int p_num) : FootSoldier(p_num)
    {
        cout << "FootCommander ctor(int)" << endl;
    }

    FootCommander::~FootCommander()
    {
        cout << "FootCommander dtor" << endl;
    }
        
    void FootCommander::shootAll()
    {
        cout << "FootCommander shootAll()" << endl;
    }