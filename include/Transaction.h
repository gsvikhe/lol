#ifndef TRANSACTION_H
#define TRANSACTION_H
class Screen; 
class BankDatabase; 
class Transaction
{
public:

    Transaction( int, Screen &, BankDatabase & );
    virtual ~Transaction() { } 
    int getAccountNumber() const; // return account number
    Screen &getScreen() const; // return reference to screen
    BankDatabase &getBankDatabase() const; // return reference to database
    // pure virtual function to perform the transaction
    virtual void execute() = 0; // overridden in derived classes
private:
    int accountNumber; // indicates account involved
    Screen &screen; // reference to the screen of the ATM
    BankDatabase &bankDatabase; // reference to the account info database
}; 
#endif 
