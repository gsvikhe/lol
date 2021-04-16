#include "Account.h" // Account class definition

#include <gtest/gtest.h>
Account acc(12345, 3409, 1000, 1200);

TEST(AccountTest, debit){
  acc.debit(100);
  EXPECT_EQ(900, acc.getAvailableBalance());
  EXPECT_EQ(1100, acc.getTotalBalance());
}

TEST(AccountTest, credit){
  acc.credit(100);
  EXPECT_EQ(900, acc.getAvailableBalance());
  EXPECT_EQ(1200, acc.getTotalBalance());
}

TEST(AccountTest, validatePIN){
  EXPECT_FALSE(acc.validatePIN(3201));
}

