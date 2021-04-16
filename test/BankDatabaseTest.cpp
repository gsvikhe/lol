#include "BankDatabase.h" // BankDatabase class definition

#include <gtest/gtest.h>

BankDatabase BDtest;

TEST(BankDataBaseTest, authenticateUser){
  EXPECT_FALSE(BDtest.authenticateUser(12345,3402));
  EXPECT_TRUE(BDtest.authenticateUser(12345,3409));
}

TEST(BankDataBaseTest, getAvailableBalance){
  EXPECT_EQ(1000, BDtest.getAvailableBalance(12345));
  EXPECT_EQ(200, BDtest.getAvailableBalance(98765));
}

TEST(BankDataBaseTest, debit){
  BDtest.debit(12345,100);
  BDtest.debit(98765,100);
  EXPECT_EQ(900, BDtest.getAvailableBalance(12345));
  EXPECT_EQ(100, BDtest.getAvailableBalance(98765));
}

