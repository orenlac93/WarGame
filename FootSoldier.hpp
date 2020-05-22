#pragma once
#include "Soldier.hpp"

class FootSoldier : public Soldier
{
    protected:
        int damage;

    public:
        FootSoldier();
        FootSoldier(int p_num);
        ~FootSoldier();
        void move();
        virtual void shoot();


};