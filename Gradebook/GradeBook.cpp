#include <iostream>
#include "GradeBook.h"
using namespace std;

GradeBook :: GradeBook(string name){
    setCourseName(name);
}

void GradeBook :: setCourseName(string name){
    courseName = name;
}

string GradeBook :: getCourseName() const{
    return courseName;
}

void GradeBook :: displayMessage() const{
    cout << "Welcome to the GradeBook for course: " 
         << getCourseName() << "!" << endl;
}