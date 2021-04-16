#ifndef ATM_H
#define ATM_H

#include "Screen.h" 
#include "Keypad.h" 
#include "CashDispenser.h" 
#include "DepositSlot.h" 
#include "BankDatabase.h" 



class Transaction; //forward declaration
class ATM
{
    public:
        ATM(); // constructor initializes data members
        void run(); // start ATM
    private:
        bool userAuthenticated; // user authenticated
        int currentAccountNumber; // current user's account number
        Screen screen; 
        Keypad keypad; 
        CashDispenser cashDispenser; 
        DepositSlot depositSlot; 
        BankDatabase bankDatabase; 
        // private utility functions
        void authenticateUser(); //  authenticate user
        void performTransactions(); 
        int displayMainMenu() const; 
        Transaction *createTransaction(int);
}; 
#endif 
