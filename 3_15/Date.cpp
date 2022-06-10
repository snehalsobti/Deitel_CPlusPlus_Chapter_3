#include <iostream>
#include "Date.h"
using namespace std;

int ifLeapYear(int year)
{
    if (year % 100 == 0)
        if (year % 400 == 0)
            return 1;
        else
            return 0;
    else
        if (year % 4 == 0)
            return 1;
        else
            return 0;
}

Date :: Date(int year, int month, int day)
{
    setYear(year);
    setMonth(month);
    setDay(day);
}

int Date :: getYear() const
{
    return myYear;
}

int Date :: getMonth() const
{
    return myMonth;
}

int Date :: getDay() const
{
    return myDay;
}

void Date :: setYear(int year)
{
    if (year > 1800 && year < 3000)
        myYear = year;
    else
        myYear = 1801;
}

void Date :: setMonth(int month)
{
    if (month >= 1 && month <= 12)
        myMonth = month;
    else
        myMonth = 1;
}

void Date :: setDay(int day)
{
    if (day <= 0 ||
        (ifLeapYear(myYear) && myMonth == 2 && day > 29) ||
        (!ifLeapYear(myYear) && myMonth == 2 && day > 28) ||
        ((myMonth == 4 || myMonth == 6 || myMonth == 9 || myMonth == 11) && day > 30) ||
        (day > 31))
            myDay = 1;
    else
        myDay = day;
}

void Date :: displayDate() const
{
    cout << "Date(MM/DD/YYYY): " << getMonth() << "/" << getDay() << "/" << getYear() << endl;
}