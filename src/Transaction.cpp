#include "Transaction.h" 
#include "Screen.h" 
#include "BankDatabase.h" 

Transaction::Transaction(int userAccountNumber, Screen &atmScreen,
BankDatabase &atmBankDatabase) : accountNumber(userAccountNumber),
                                 screen(atmScreen),
                                 bankDatabase(atmBankDatabase)
{
// empty body
} 


// return account number
int Transaction::getAccountNumber() const
{
    return accountNumber;
}   

// return reference to screen
Screen &Transaction::getScreen() const
{
    return screen;
} 

// return reference to bank database
BankDatabase &Transaction::getBankDatabase() const
{
    return bankDatabase;
} 
