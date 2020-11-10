#ifndef _pTest_h
#define _pTest_h


#include "player.h"
#include <gtest/gtest.h>

TEST(player, constructor) {

    player p1;
    player p2("Mr.abc","India");

    EXPECT_EQ("", p1.getPlayerName());
   EXPECT_EQ("", p1.getPlayerCountry());
   EXPECT_EQ("Mr.abc", p2.getPlayerName());
   EXPECT_EQ("India", p2.getPlayerCountry());
}



#endif