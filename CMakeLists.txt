cmake_minimum_required(VERSION 2.6)
project(ATM)
add_definitions(-std=c++14)


add_library(${PROJECT_NAME}
	src/Account.cpp
	src/ATM.cpp
	src/BalanceInquiry.cpp
	src/BankDatabase.cpp
	src/CashDispenser.cpp
	src/Deposit.cpp
	src/DepositSlot.cpp
	src/Keypad.cpp
	src/Screen.cpp
	src/Transaction.cpp
	src/Withdrawal.cpp)
	
include_directories(
  include)

################################
# GTest
################################
find_package(GTest REQUIRED)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})
enable_testing()

################################
# Unit Tests
################################
# Add test cpp file
add_executable(main 
	test/ATM_Impl.cpp
	test/AccountTest.cpp
	test/BankDatabaseTest.cpp
	test/CashDispenserTest.cpp)

include_directories(
  include)
  
# Link test executable against gtest & gtest_main
target_link_libraries(main ${GTEST_LIBRARIES} ATM pthread)
add_test( main main )

set_target_properties(
    ${LIBRARY_NAME} main 
      PROPERTIES 
        CXX_STANDARD 11 
        CXX_STANDARD_REQUIRED YES 
        CXX_EXTENSIONS NO
)
