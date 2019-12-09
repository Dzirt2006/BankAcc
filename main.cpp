#include <iostream>
#include "SavingAccount.h"
#include "CheckingAccout.h"

int main() {
    BankAccount bank;
    BankAccount *b = nullptr;
    string input;
    cout << "What type of account do you whant to use? \n Saving(enter 's') \n Checking(enter 'c')" << endl;
    cin >> input;
    if (input == "s") {
        double bal;
        double inter;
        cout << "Enter the balance:" << endl;
        cin >> bal;
        cout << "Enter the interest" << endl;
        cin >> inter;
        SavingAccount save(bal, inter);
       save.Action();
    } else if (input == "c") {
        double bal;
        double inter;
        cout << "Enter the balance:" << endl;
        cin >> bal;
        CheckingAccout check(bal);
        check.Actions();
    }
    return 0;
}