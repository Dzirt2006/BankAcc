//
// Created by dzirt on 11/7/2019.
//

#ifndef BANKACCOUNTFINALPRJCT_BANKACCOUNT_H
#define BANKACCOUNTFINALPRJCT_BANKACCOUNT_H

#include <iostream>

using namespace std;

class BankAccount {
public:
    BankAccount() {
        this->Num_Withdrawals = 0;
        this->Num_Deposit = 0;
        this->Monthly_Serv_Charges = 0;
    }

    BankAccount(double Current) {
        this->Balance = Current;
    }

    BankAccount(double Current, double Current_Interest) {
        this->Balance = Current;
        this->An_Interest = Current_Interest;
    }

protected:
    //variables list
    double Balance;
    int Num_Deposit; //number of deposit in this month
    int Num_Withdrawals;
    double An_Interest;//Annual interest rate
    double Monthly_Serv_Charges; //per month

    //virtual functions
    virtual void deposit(double dep_amount) {
        this->Balance += dep_amount;
        this->Num_Deposit++;
    }

    virtual void withdraw(double withdraw_amount) {
        Balance -= withdraw_amount;
        Num_Withdrawals++;
    }

    virtual void calcInt() {
        double Monthly_Int_rate;
        double Monthly_Interest;
        Monthly_Int_rate = (An_Interest / 12);
        Monthly_Interest = Balance * Monthly_Int_rate;
        cout << "You interest savings is: " << Monthly_Interest << endl;
        Balance += Monthly_Interest;
    }

    virtual void monthlyProc() {
        Balance -= Monthly_Serv_Charges;
        calcInt();
        Num_Withdrawals = 0;
        Num_Deposit = 0;
        Monthly_Serv_Charges = 0;

    }

    virtual void monthlyStatement() {
        if (Num_Withdrawals == 0) {
            cout << "Nothing to charge" << endl;
        } else {
            monthlyProc();
            cout << "\n-----------------------------------------------" << endl;
            cout << "withdrawal amount: " << Num_Withdrawals << endl;
            cout << "Your monthly service charge is: " << Monthly_Serv_Charges << "$" << endl;
            cout << "Your final balance is: " << Balance << "$" << endl;
            cout << "-----------------------------------------------\n" << endl;
        }
    }
};


#endif //BANKACCOUNTFINALPRJCT_BANKACCOUNT_H
