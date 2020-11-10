#include "olympic.h"

void Olympic::addResult(std::string NameW,std::string cntryRX,std::string gamePd,std::string medalRx){

    l_swimrs.push_back(swimming(NameW,cntryRX,gamePd,medalRx));
}



void Olympic::goldCnt(){

std::list<swimming> :: iterator iter;

for(iter=l_swimrs.begin();iter!=l_swimrs.end();iter++)   //Scan Database to find the customer
    {
        if(iter->getMedal() == "Gold" ) 
        {
            std::string tempCntry = iter->getPlayerCountry();

            if(tempCntry == "India"){
            goldCnt_India += 1;
            }
            else if(tempCntry == "Norway"){
            goldCnt_Norway += 1;
            }
            else{
            goldCnt_Egypt += 1;  

            }
        }

           

    }


}

int Olympic::countAll()
{
		int count=0;
    std::list<swimming>::iterator iter;
    for(iter=l_swimrs.begin();iter!=l_swimrs.end();++iter)
    {
        count++;
    }
    return count;
}


std::string Olympic::maxGold(){
goldCnt();
char max = goldCnt_India ;
std::string cntry = "India";

    if (max < goldCnt_Norway)
    {
      max =   goldCnt_Norway;
      cntry = "Norway";
    }

    if(max < goldCnt_Egypt)
    {
        max =   goldCnt_Egypt;
        cntry = "Egypt";
    }

    
   return  cntry;


}
