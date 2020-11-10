#ifndef _sTest_h
#define _sTest_h


#include "swimming.h"
#include <gtest/gtest.h>

TEST(swimming, constructor) {

    swimming p1;
    swimming p2("Mr.abc","India","1992-Summer","Gold");

    EXPECT_EQ("", p1.getPlayerName());
   EXPECT_EQ("", p1.getPlayerCountry());
   EXPECT_EQ("Mr.abc", p2.getPlayerName());
   EXPECT_EQ("India", p2.getPlayerCountry());
   EXPECT_EQ("1992-Summer", p2.getGameName());
   EXPECT_EQ("Gold", p2.getMedal());
}



#endif
