//
// Created by dzirt on 12/6/2019.
//

#ifndef BANKACCOUNTFINALPRJCT_CHECKINGACCOUT_H
#define BANKACCOUNTFINALPRJCT_CHECKINGACCOUT_H

#include "BankAccount.h"

class CheckingAccout : public BankAccount {
public:
    //constructors
    CheckingAccout(double balance){
        this->Balance = balance;
    }
public:
    void Actions();

protected:
    //prototypes

    void Repeat();
    //variables
    const int SERVICE_CHARGE = 15;

    void withdraw(double withdrawalAmount) override {
        double checkBal = Balance - withdrawalAmount;
        if (checkBal < 0) {
            Monthly_Serv_Charges += 15;
            cout << "You can't do this transaction, your balance will be less 0$." << endl;
        } else {
            BankAccount::withdraw(withdrawalAmount);
        }
    }

    void monthlyProc() override {
        Monthly_Serv_Charges += 5 + (0.10 * Num_Withdrawals);
        cout<<Monthly_Serv_Charges<<endl;
        Balance-=Monthly_Serv_Charges;
    }
};


#endif //BANKACCOUNTFINALPRJCT_CHECKINGACCOUT_H
