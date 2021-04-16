#ifndef CASH_DISPENSER_H
#define CASH_DISPENSER_H
class CashDispenser
{
public:
    CashDispenser(); 
    void dispenseCash(int);
    // indicates whether cash dispenser can dispense desired amount
    bool isSufficientCashAvailable(int) const;
private:
    static const int INITIAL_COUNT = 1000;
    int count; // number of $10 bills remaining
}; 
#endif 
