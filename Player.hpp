# pragma once 
# include <stdio.h>
#include "Color.hpp"
#include "City.hpp"
#include "Board.hpp"
#include <vector>
#include <iostream>

using pandemic::Board;

namespace pandemic{
    class Player{
        public:
            Player(Board b ,City city);

       
        Player& drive(City c );
        Player& fly_direct(City c);
        Player& fly_charter(City c);
        Player& fly_shuttle(City c);
        Player& build();
        Player& discover_cure(Color color);
        Player& treat(City c);
        Player& take_card(City c);
        std::string role ();

        // inline func
        City get_city(){
            return this->city;
        }
        void set_city(City c){
            this->city=c;

        }

        protected:
            Board board;
            // std::string player_role;
            City city;
            std::vector<City>cardes(int) ;






    };
}

