#pragma once
#include "Soldier.hpp"

class Sniper : public Soldier
{
    protected:
        int damage;

    public:
        Sniper();
        Sniper(int p_num);
        virtual ~Sniper();
        virtual void move();
        virtual void shoot();

        virtual std::string printType();


};