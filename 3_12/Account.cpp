#include <iostream>
#include "Account.h"
using namespace std;

Account :: Account(int initBal){
    if (initBal >= 0){
        balance = initBal;
    }
    else{
        balance = 0;
        cerr << "Invalid initial balance entered.\n"
                "Setting up account with zero balance.\n" << endl;
    }
}

void Account :: credit(int amount){
    if (amount >= 0){
        balance += amount;
    }
    else{
        cerr << "Invalid credit amount entered.\n"
                "Adding zero amount to current balance.\n" << endl;
    }
}

void Account :: debit(int amount){
    if (amount <= balance){
        balance -= amount;
    }
    else{
        cerr << "Debit amount exceeded account balance.\n" << endl;
    }
}

int Account :: getBalance() const{
    return balance;
}