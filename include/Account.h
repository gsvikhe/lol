#ifndef ACCOUNT_H
#define ACCOUNT_H
class Account
{
    public:
        Account(int, int, int, int); 
        int getAccountNumber() const; // returns account number
        bool validatePIN(int) const; // Check PIN
        double getAvailableBalance() const; // return balance
        double getTotalBalance() const; // return total balance
        void credit(int); // adds an amount to the Account balance
        void debit(int); // subtracts an amount from the Account balance
        
    private:
        int accountNumber; // account number
        int pin; // PIN
        int availableBalance; // funds available for withdrawal
        int totalBalance; // funds available + funds waiting to clear
}; 
#endif 
