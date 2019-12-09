cmake_minimum_required(VERSION 3.15)
project(BankAccountFinalPRJCT)

set(CMAKE_CXX_STANDARD 14)

add_executable(BankAccountFinalPRJCT main.cpp BankAccount.cpp BankAccount.h SavingAccount.cpp SavingAccount.h CheckingAccout.cpp CheckingAccout.h)