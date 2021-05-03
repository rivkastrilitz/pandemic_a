
#include "Player.hpp"

using namespace std;
using pandemic::Board;

namespace pandemic{

    // std::vector<City>cardes(48);

    Player::Player(Board b ,City c){
        this->board=b;
        this->city=c;
        // this->player_role=rol;
    }


    Player& Player::drive(City c ){
        return *this;

    }

    Player& Player::fly_direct(City c){
        return *this;
    }

    Player& Player::fly_charter(City c){
        return *this;
    }

    Player& Player::fly_shuttle(City c){
        return *this;
    }

    Player& Player::build(){
        return *this;
    }

    Player& Player::discover_cure(Color color){
        return *this;
    }

    Player& Player::treat(City c){
        return *this;
    }
    
    Player& Player::take_card(City c){
        return *this;
    }

    std::string Player::role (){
        return "str";
    }

    

    
}