//
// Created by dzirt on 11/7/2019.
//

#ifndef BANKACCOUNTFINALPRJCT_BANKACCOUNT_H
#define BANKACCOUNTFINALPRJCT_BANKACCOUNT_H


class BankAccount {
public:
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
    double Serv_Charges; //per month

    //virtual function
    virtual void deposit(double dep_amount){
        this->Balance+=dep_amount;
        this->Num_Deposit++;
    }
};


#endif //BANKACCOUNTFINALPRJCT_BANKACCOUNT_H
