#pragma once
#include <stdio.h>
#include <map>
#include <vector>
#include <string>
#include <array>

#include <iostream>
#include <fstream>
#include "Color.hpp"
#include "City.hpp"

namespace pandemic{
    class Board{

        public:
            Board();
            void read_city_file(std::ifstream& file);
            bool is_clean();
            int& operator[](City c);
            friend std::ostream& operator << (std::ostream& out ,const Board b);
            void remove_cures();

        private:
            std::map<City,int>cubes;
            std::map<City,std::vector<City>> connections;
            std::map<City,Color>cityes_color;
            // defult is false
            std::map<City,bool>research_station;
            // red ,black ,yellow , blue ----defult is false
            bool cure[4];


        

    };
}

