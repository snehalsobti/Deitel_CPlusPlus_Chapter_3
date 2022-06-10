#include <iostream>
#include "Date.h"
using namespace std;

int main()
{
    Date date1(2022, 6, 10);
    date1.displayDate();
    date1.setYear(2002);
    date1.setMonth(12);
    date1.setDay(11);
    date1.displayDate();
}