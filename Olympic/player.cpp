#include "player.h"

player::player(): p_name(""),p_Country(""){}

player::player(std::string name,std::string cntry):  p_name(name),p_Country(cntry){}

std::string  player::getPlayerName(){
    return p_name;
}


std::string  player::getPlayerCountry(){
    return p_Country;
}
