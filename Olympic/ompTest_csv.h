
#ifndef _oTest_h
#define _oTest_h

#include "olympic.h"
#include <gtest/gtest.h>


TEST(Olympic,maxCount_GOlD){
Olympic o1;

o1.addResult("Mr.abc","Egypt","1992-Summer","Gold");
o1.addResult("Mr.abc","Egypt","1992-Summer","Gold");


o1.addResult("Mr.abc","India","1992-Summer","Gold");
o1.addResult("Mr.abc","India","1992-Summer","Gold");
o1.addResult("Mr.abc","India","1992-Summer","Gold");

o1.addResult("Mr.abc","Norway","1992-Summer","Gold");
o1.addResult("Mr.abc","Norway","1992-Summer","Gold");
o1.addResult("Mr.abc","Norway","1992-Summer","Gold");
o1.addResult("Mr.abc","Norway","1992-Summer","Gold");

EXPECT_EQ("Norway", o1.maxGold());

}

#endif