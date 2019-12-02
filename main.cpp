#include <iostream>
#include "SavingAccount.h"

int main() {
    BankAccount acc;
    SavingAccount save(100, 10);

    SavingAccount *s=&save;
    s->Action();

    return 0;
}