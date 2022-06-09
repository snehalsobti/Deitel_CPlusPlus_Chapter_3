#include <iostream>
#include "Account.h"
using namespace std;

int main(){
    Account acc1(5000);
    Account acc2(-50);
    acc1.credit(200);
    acc1.debit(1000);
    cout << "Balance of acc1 is: " << acc1.getBalance() << "\n" << endl;
    acc2.credit(700);
    acc2.debit(1000);
    cout << "Balance of acc2 is: " << acc2.getBalance() << "\n" << endl;
}