#ifndef oly_h
#define oly_h

#include "swimming.h"
#include <list>

class Olympic{
char goldCnt_India = 0;
char goldCnt_Norway = 0;
char goldCnt_Egypt = 0;

std::list<swimming> l_swimrs;

public :

void addResult(std::string , std::string ,std::string ,std::string );
void goldCnt();
std::string maxGold();
int countAll();





}; // Class end


#endif
