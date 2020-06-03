#pragma once
#include "Paramedic.hpp"

class ParamedicCommander : public Paramedic
{
    private:
        

    public:
        ParamedicCommander();
        ParamedicCommander(int p_num);
        ~ParamedicCommander();
        
        virtual void move();
        virtual void shootAll();

        std::string printType();


};