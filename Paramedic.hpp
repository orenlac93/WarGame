#pragma once
#include "Soldier.hpp"

class Paramedic : public Soldier
{
    protected:
        int damage;

    public:
        Paramedic();
        Paramedic(int p_num);
        virtual ~Paramedic();
        virtual void move();
        virtual void shoot();

        virtual std::string printType();


};