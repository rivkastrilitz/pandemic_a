#include "Board.hpp"

using namespace std;

namespace pandemic{

    Board::Board(){
        // ifstream file{"cities_map.txt"};
        // read_city_file(file);

    }




        
    void Board::read_city_file(ifstream& file){
        //  string line;
        //  string main_city;
        //  string nighbor_city;
        //  Color city_color;
        //  string color;
        //  City c;

        //  while(getline(file,line)){
        //      u_int i=0;
        //      while(line.at(i)!=' '){
        //          main_city+=line.at(i);
        //          i++;

        //      }
        //      i++;
        //      while(line.at(i)!=' '){
        //          color+=line.at(i);
        //          i++;

        //      }
        //      city_color=color_str[color];
        //      i++;

        //      while(line.at(i)!='\0'){
        //          while(line.at(i)!=' '){
        //              nighbor_city+=line.at(i);
                    
                    
        //          }
        //          c=city_str[main_city];
        //          City ni_city=city_str[nighbor_city];
        //          connections[c].push_back(ni_city);
        //          i++;
                

        //      }
        //      cubes[c]=0;
        //      cityes_color[c]=city_color;
                

        //  }
    }

    int& Board::operator[](City c) {
    //    if(this->cubes.find(c)!= this->cubes.end()){
    //        return cubes[c];
    //    }else{
    //        throw invalid_argument("ther is no such city in board");
    //    }
    int *temp=NULL;
    return *temp;

    }

    bool Board::is_clean(){

        return cubes.empty();
    }

    void Board::remove_cures(){
        
    }

    ostream& operator<<(std::ostream& out, const Board b){
        return out;
    }

    static  map<string, City> city_str{ {"Algiers", City::Algiers}, {"Atlanta", City::Atlanta},
        {"Baghdad", City::Baghdad}, {"Bangkok", City::Bangkok},
        {"Beijing", City::Beijing}, {"Beijing", City::Beijing},
        {"Bogota", City::Bogota}, {"BuenosAires", City::BuenosAires},
        {"Cairo", City::Cairo}, {"Chennai", City::Chennai},
        {"Chicago", City::Chicago}, {"Delhi", City::Delhi},
        {"Essen", City::Essen}, {"HoChiMinhCity", City::HoChiMinhCity},
        {"HongKong", City::HongKong}, {"Istanbul", City::Istanbul},
        {"Jakarta", City::Jakarta}, {"Johannesburg", City::Johannesburg},
        {"Karachi", City::Karachi}, {"Khartoum", City::Khartoum},
        {"Kinshasa", City::Kinshasa}, {"Kolkata", City::Kolkata},
        {"Lagos", City::Lagos}, {"Lima", City::Lima}, {"London", City::London},
        {"LosAngeles", City::LosAngeles}, {"Madrid", City::Madrid},
        {"Manila", City::Manila}, {"MexicoCity", City::MexicoCity},
        {"Miami", City::Miami}, {"Milan", City::Milan}, {"Montreal", City::Montreal},
        {"Moscow", City::Moscow}, {"Mumbai", City::Mumbai}, {"NewYork", City::NewYork},
        {"Osaka", City::Osaka}, {"Paris", City::Paris}, {"Riyadh", City::Riyadh},
        {"SanFrancisco", City::SanFrancisco}, {"Santiago", City::Santiago},
        {"SaoPaulo", City::SaoPaulo}, {"Seoul", City::Seoul}, {"Shanghai", City::Shanghai},
        {"StPetersburg", City::StPetersburg}, {"Sydney", City::Sydney}, {"Taipei", City::Taipei},
        {"Tehran", City::Tehran}, {"Tokyo", City::Tokyo}, {"Washington", City::Washington}
    };

    static  map<string, Color> color_str{
        {"Blue", Color::Blue}, {"Black", Color::Black}, {"Red", Color::Red}, { "Yellow", Color::Yellow }
    }; 
            
}
    

    
    

