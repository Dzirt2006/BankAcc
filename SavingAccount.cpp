//
// Created by dzirt on 12/1/2019.
//

#include "SavingAccount.h"
#include <string>

void SavingAccount::Status() {
    if (Balance <= 25) {
        this->status = false;
    } else this->status = true;
}

void SavingAccount::Action(){
    cout<<"What action you wants to do? \n Withdraw(type 'w') \n Deposit(type 'd')"<<endl;
    string s;
    getline(cin,s);
    if(s=="w"){
        cout<<"What amount do you want to withdraw?"<<endl;
        double w;
        cin>>w;
        withdraw(w);
        s=" ";
        cout<<Balance<<endl;
        cout<<BankAccount::Balance;
    }else{
        cout<<"What amount do you want to deposit?"<<endl;
        double d;
        cin>>d;
        deposit(d);
        s=" ";
    }
    cout<<"Do you want to do another operation? Y/N"<<endl;
    string inpt;
    bool go=false;
    cin>>inpt;
    if(inpt=="y"){
        Action();
    }else
        cout<<"Have a great day!"<<endl;

}
