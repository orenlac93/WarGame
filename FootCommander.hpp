#pragma once
#include "FootSoldier.hpp"

class FootCommander : public FootSoldier
{
    private:
        

    public:
        FootCommander();
        FootCommander(int p_num);
        ~FootCommander();
        
        virtual void shootAll();


};