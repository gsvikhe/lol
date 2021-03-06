#ifndef DEPOSIT_H
#define DEPOSIT_H
#include "Transaction.h" 
class Keypad; 
class DepositSlot; 
class Deposit : public Transaction
{
public:
    Deposit(int, Screen &, BankDatabase &, Keypad &, DepositSlot &);
    virtual void execute(); // perform the transaction
private:
    int amount; // amount to deposit
    Keypad &keypad; // reference to ATM's keypad
    DepositSlot &depositSlot; // reference to ATM's deposit slot
    double promptForDepositAmount() const; // get deposit amount from user
}; 
#endif 
