//
// Created by dzirt on 12/1/2019.
//

#ifndef BANKACCOUNTFINALPRJCT_SAVINGACCOUNT_H
#define BANKACCOUNTFINALPRJCT_SAVINGACCOUNT_H

#include "BankAccount.h"
#include <iostream>

using namespace std;

class SavingAccount : public BankAccount {
public:
    SavingAccount(double current, double currentInterest)  {
        this->Balance=current;
        this->An_Interest=currentInterest;
    }

public:
    void Action();

private:
    //prototype
    void Status();


    //variables
    bool status{};

    //override methods
    void withdraw(double withdraw_amount) override {
        Status();
        if (!status) {
            cout << "Your balance is less than 25$, your account is inactive." << endl;
        } else {
            BankAccount::withdraw(withdraw_amount);
        }
    }

    void deposit(double dep_amount) override {
        Status();
        if (!status) {
            double check = Balance + dep_amount;
            if (check > 25) {
                status=true;
                cout<<"Your account now is active!"<<endl;
            }else {
                cout<<"Your account still is inactive"<<endl;
            }
        }
        BankAccount::deposit(dep_amount);
    }

    void monthlyProc() override {
        if(Num_Withdrawals>4){
            Monthly_Serv_Charges+=Num_Withdrawals;
            Balance-=Monthly_Serv_Charges;
            if(Balance<25){
                status=false;
                cout<<"Your balance inactive because it has less than 25$."<<endl;
            }
        }
    }
};


#endif //BANKACCOUNTFINALPRJCT_SAVINGACCOUNT_H
