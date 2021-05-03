#pragma once 
#include <stdio.h>
#include "Player.hpp"

namespace pandemic{
    class Scientist:public Player{

        public:
            
            Scientist(Board b,City c,int n); 

        private:
            int num;

    };



}