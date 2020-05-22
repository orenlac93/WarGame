#pragma once
#include<iostream>

class Soldier
{
    protected:
        uint player_num;
        int hp;

    public:
        Soldier();
        Soldier(uint p_num);
        ~Soldier();

        int get_p_num() const;

        virtual void move();


};