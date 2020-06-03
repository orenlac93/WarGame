#pragma once
#include "Sniper.hpp"

class SniperCommander : public Sniper
{
    private:
        

    public:
        SniperCommander();
        SniperCommander(int p_num);
        ~SniperCommander();
        
        virtual void move();
        virtual void shootAll();

        std::string printType();


};