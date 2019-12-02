//
// Created by dzirt on 11/7/2019.
//

#ifndef BANKACCOUNTFINALPRJCT_BANKACCOUNT_H
#define BANKACCOUNTFINALPRJCT_BANKACCOUNT_H


class BankAccount {
public:
    BankAccount(){

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
    virtual void deposit(double dep_amount){
        this->Balance+=dep_amount;
        this->Num_Deposit++;
    }

    virtual void withdraw(double withdraw_amount){
        this->Balance-=withdraw_amount;
        this->Num_Withdrawals++;
    }

    virtual void calcInt(){
        double Monthly_Int_rate;
        double Monthly_Interest;
        Monthly_Int_rate=this->An_Interest/12;
        Monthly_Interest=this->Balance*Monthly_Int_rate;
        this->Balance+=Monthly_Interest;
    }

    virtual void monthlyProc(){
        this->Balance-=Monthly_Serv_Charges;
        calcInt();
        this->Num_Withdrawals=0;
        this->Num_Deposit=0;
        this->Monthly_Serv_Charges=0;
    }
};


#endif //BANKACCOUNTFINALPRJCT_BANKACCOUNT_H
