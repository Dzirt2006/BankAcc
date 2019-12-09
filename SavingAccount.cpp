//
// Created by dzirt on 12/1/2019.
//

#include "SavingAccount.h"
#include <string>

void SavingAccount::Status() {
    this->status = Balance > 25;
}

void SavingAccount::Action() {
    cout
            << "What action you wants to do? \n Withdraw(type 'w') \n Deposit(type 'd') \n Monthly statement(enter 's') \n Account balance(enter 'b')"
            << endl;
    string s;
    cin >> s;
    if (s == "w") {
        Status();
        if (!this->status) {
            cout << "Your account inactive." << endl;
            Repeat();
        } else {
            cout << "What amount do you want to withdraw?" << endl;
            double w;
            cin >> w;
            withdraw(w);
            cout << Balance << endl;
            cout << BankAccount::Balance << endl;
        }
    } else if (s == "d") {
        cout << "What amount do you want to deposit?" << endl;
        double d;
        cin >> d;
        deposit(d);
    } else if (s == "s") {
        BankAccount::monthlyStatement();
    } else if (s == "b") {
        cout << "Your balance is: " << Balance << "$" << endl;
    } else {
        cout << "Wrong code." << endl;
        Repeat();
    }
    Repeat();
}

void SavingAccount::Repeat() {
    cout << "Do you want to do another operation? Y/N" << endl;
    string inpt;
    cin >> inpt;
    //getline(cin,inpt);
    if (inpt == "y") {
        Action();
    } else
        cout << "Have a great day!" << endl;
}
/*
void SavingAccount::MonthlyStatement() {
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
}*/