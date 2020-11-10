#ifndef _player_h
#define _player_h

#include <string>

class player{

protected :
std::string p_name;
//unsigned char p_age;     //0-100 
//unsigned char p_sex;     
//unsigned char p_height;   //in feet or cm
//unsigned char p_Weight;    // kgs
std::string p_Country;   

public:

player();
//player(std::string,unsigned char ,unsigned char ,unsigned char ,unsigned char,std::string );
player(std::string ,std::string );
std::string  getPlayerName();
//void getPlayerAge();
std::string  getPlayerCountry();
};
  
   



#endif