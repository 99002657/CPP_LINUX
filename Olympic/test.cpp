//#include "ompTest.h"

#include "olympic.h"
#include <gtest/gtest.h>
using namespace std;
#include <list>
#include <iterator>
#include<fstream>
#include<semaphore.h>
#include<pthread.h>

pthread_mutex_t m1=PTHREAD_MUTEX_INITIALIZER;
sem_t s1;
Olympic l_own;


void* efun1(void* pv){



        pthread_mutex_lock(&m1);
        l_own.addResult("Edgar Lindenau Aabye","Finland","Swimming","Gold");
        l_own.addResult("Gunnar Nielsen Aaby","Netherlands","Swimming","Silver");
        l_own.addResult("Rolf Aas","Norway","Swimming","Gold"); 
        l_own.addResult("Hans Aasns","India","Swimming","Bronze");
        l_own.addResult("Patrick Abada","India","Swimming","Bronze");
        l_own.addResult("Per Knut Aaland","India","Swimming","Gold"); 
        pthread_mutex_unlock(&m1);
        sem_post(&s1);

}


void* efun2(void* pv)        
{

        sem_wait(&s1);            
        pthread_mutex_lock(&m1);
        pthread_mutex_unlock(&m1);
        
}



class playerdbtest : public ::testing::Test {

protected:
  void SetUp() 
 {
  
  		std::list<string> res;
     		std::list<string> ::iterator iter;
     		std::string Name;
     		std::string Team; 
     		std::string Sport; 
     		std::string Medal;
    		std::string S, T;
    		fstream fin;
    		int count=1;
    		fin.open("my_data.csv", ios::in);

		while(getline(fin, S))
    		{
    			stringstream X(S);
    			while (getline(X, T,'\n'))
   			 {
   	 			res.push_back(T);
    			 }
   	        }
    		iter=res.begin();
   		 ++iter;
   		 for(;iter!=res.end();++iter)
    		{
    			//std::cout<<*iter<<endl;
    			stringstream ss(*iter); 
    			while (ss.good()) 
    			{ 
        			std::string substr; 
        			getline(ss, substr, ','); 
        			switch(count)
        			{
        				case 1:
        					Name=substr;
        					break;
        				case 2:
        					Team=(substr);
        					break;
					case 3:
        					Sport=(substr);
        					break;
					case 4:
        					Medal=(substr);
        				
c.addResult(Name,Team,Sport,Medal);Name="",Team="",Sport="",Medal="",count=0;
						break;
        			
        			}
        			++count;
        			
    			} 
  		}
    
}
  void TearDown() {}
  Olympic c;
};				

TEST_F(playerdbtest, addResultall) {

    pthread_t pt1,pt2;    
    sem_init(&s1,0,0);
    pthread_create(&pt1,NULL,efun1,NULL);
    pthread_create(&pt2,NULL,efun2,NULL);
    pthread_join(pt1,NULL);
    pthread_join(pt2,NULL);

    l_own.addResult("Per Knut Aaland","India","Swimming","Gold");
    EXPECT_EQ(7, l_own.countAll());

    sem_destroy(&s1);
    pthread_mutex_destroy(&m1);
}



TEST(Olympic,maxCount_GOlD){
Olympic o1;

o1.addResult("Edgar Lindenau Aabye","Finland","Swimming","Gold");


EXPECT_EQ("Egypt", o1.maxGold());

}
/*
int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
*/
