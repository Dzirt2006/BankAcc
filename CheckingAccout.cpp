//
// Created by dzirt on 12/6/2019.
//

#include "CheckingAccout.h"

void CheckingAccout::Actions() {
    cout
            << "What action you wants to do? \n Withdraw(type 'w')\n Monthly statement(enter 's') \n Account balance(enter 'b')"
            << endl;
    string s;
    cin >> s;
    if (s == "w") {
        cout << "What amount do you want to withdraw?" << endl;
        double w;
        cin >> w;
        withdraw(w);
        cout << Balance << endl;
    } else if (s == "s") {
        BankAccount::monthlyStatement();
    } else if (s == "b") {
        cout << "Your balance is: " << Balance << "$" <<
             endl;
    } else {
        cout << "Wrong code." << endl;
        Repeat();
    }
    Repeat();
}

void CheckingAccout::Repeat() {
    cout << "Do you want to do another operation? Y/N" << endl;
    string inpt;
    cin >> inpt;
    //getline(cin,inpt);
    if (inpt == "y") {
        Actions();
    } else
        cout << "Have a great day!" << endl;
}