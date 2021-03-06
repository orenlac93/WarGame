#pragma once
#include "Soldier.hpp"

class FootSoldier : public Soldier
{
    protected:
        int damage;

    public:
        FootSoldier();
        FootSoldier(int p_num);
        virtual ~FootSoldier();
        virtual void move();
        virtual void shoot();

        virtual std::string printType();


};