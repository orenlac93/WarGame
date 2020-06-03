#include"ParamedicCommander.hpp"
#include<iostream>

using namespace std;

    ParamedicCommander::ParamedicCommander()
    {
        cout << "ParamedicCommander ctor" << endl;
    }

    ParamedicCommander::ParamedicCommander(int p_num) : Paramedic(p_num)
    {
        cout << "ParamedicCommander ctor(int)" << endl;
    }

    ParamedicCommander::~ParamedicCommander()
    {
        cout << "ParamedicCommander dtor" << endl;
    }

    void ParamedicCommander::move()
    {
        cout << "ParamedicCommander moving..." << endl;
    }
        
    void ParamedicCommander::shootAll()
    {
        cout << "ParamedicCommander shootAll()" << endl;
    }

    std::string ParamedicCommander::printType()
    {
        return "PC";
    }