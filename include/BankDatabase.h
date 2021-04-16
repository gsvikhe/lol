#ifndef BANK_DATABASE_H
#define BANK_DATABASE_H
#include <vector> 
using namespace std;

#include "Account.h" 
class BankDatabase
{
    public:
        BankDatabase(); 
        bool authenticateUser(int, int); // returns true if pin and acc correct
        double getAvailableBalance(int); // get an available balance
        double getTotalBalance(int); // get an Account's total balance
        void credit(int, int); // add amount to Account balance
        void debit(int, int); // subtract amount from Account balance
    private:
        vector<Account> accounts; // vector of the bank's Accounts
        Account* getAccount(int); // get pointer to Account object
}; 
#endif 
