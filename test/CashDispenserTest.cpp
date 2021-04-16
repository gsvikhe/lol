#include "CashDispenser.h" 
#include <gtest/gtest.h>

CashDispenser CDtest;

TEST(CDtest, isSufficientCashAvailable){
  EXPECT_TRUE(CDtest.isSufficientCashAvailable(1000));
  EXPECT_FALSE(CDtest.isSufficientCashAvailable(11000));
}
