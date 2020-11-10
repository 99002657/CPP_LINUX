#ifndef _swim_h
#define _swim_h

#include "player.h"
#include <string>


class swimming : public player{
std::string s_game;
std::string s_medal;

public :
swimming();
swimming(std::string,std::string,std::string,std::string);

std::string getGameName();
std::string getMedal();




};



#endif