#include "swimming.h"

swimming :: swimming():player(),s_game(""),s_medal(""){}

swimming :: swimming(std::string pName,std::string pTeam,std::string gName ,std::string med):
player(pName,pTeam),s_game(gName),s_medal(med){}
 
std::string swimming::getGameName(){
    return s_game;
}

std::string swimming::getMedal(){
    return s_medal;
}