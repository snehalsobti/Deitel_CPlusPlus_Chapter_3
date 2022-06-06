#include <iostream>
#include <string>
#include "GradeBook.h"
using namespace std;

GradeBook :: GradeBook(string name){
    setCourseName(name);
}

void GradeBook :: setCourseName(string name){
    if (name.size() <= 25)
        courseName = name;
    else{
        courseName = name.substr(0, 25);
        cerr << "Name \"" << name << "\" exceeds maximum length (25).\n"
                "Limiting courseName to first 25 characters.\n" << endl;
    }
}

string GradeBook :: getCourseName() const{
    return courseName;
}

void GradeBook :: displayMessage() const{
    cout << "Welcome to the GradeBook for course: " 
         << getCourseName() << "!" << endl;
}