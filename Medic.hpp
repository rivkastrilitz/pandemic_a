
#pragma once 
#include <stdio.h>
#include "Player.hpp"

namespace pandemic{
    class Medic:public Player{

        public:
            Medic(Board b ,City c);
    };



}