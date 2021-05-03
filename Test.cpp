#include "doctest.h"

#include "Board.hpp"
#include "City.hpp"
#include "Color.hpp"
#include "Player.hpp"

#include "Researcher.hpp"
#include "Scientist.hpp"
#include "FieldDoctor.hpp"
#include "GeneSplicer.hpp"
#include "OperationsExpert.hpp"
#include "Dispatcher.hpp"
#include "Medic.hpp"
#include "Virologist.hpp"

#include <stdio.h>
#include <string>
#include <algorithm>
using namespace std;


using namespace pandemic;
Board b;
City c= City::BuenosAires;
Player rivka(b,c);



TEST_CASE("good"){

    rivka.take_card(City::Bogota)
	 .take_card(City::Chennai)
	 .take_card(City::SaoPaulo);
     
	// vector<City>::iterator it = find(cardes.begin(), cardes.end(), Bogota);
    // CHECK(it!=Player::cardes.end());
    rivka.drive(City::Bogota);
    CHECK_EQ(rivka.get_city(),City::Bogota);
   rivka.fly_direct(City::Chennai);
    CHECK_EQ(rivka.get_city(),City::Chennai);
    rivka.fly_charter(City::Chennai);
    CHECK_EQ(rivka.get_city(),City::Chennai);
    rivka.fly_charter(City::SaoPaulo);
    CHECK_EQ(rivka.get_city(),City::SaoPaulo);

    CHECK_THROWS(rivka.fly_direct(City::Paris));
    rivka.take_card(City::Paris);
    rivka.fly_direct(City::Paris);
    CHECK_EQ(rivka.get_city(),City::Paris);

     rivka.take_card(City::Madrid);
    rivka.fly_direct(City::Madrid);
    CHECK_EQ(rivka.get_city(),City::Madrid);

    
    rivka.drive(City::London);
    CHECK_EQ(rivka.get_city(),City::London);

}

TEST_CASE("bad"){
    CHECK_THROWS(rivka.drive(City::Lima));
    for(int i=0;i<20;i++){
     CHECK_THROWS(rivka.drive(City::Miami));   
    }
    

    
   
}