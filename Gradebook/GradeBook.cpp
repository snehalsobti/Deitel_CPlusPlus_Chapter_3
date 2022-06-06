#include <iostream>
#include <string>
#include "GradeBook.h"
using namespace std;

GradeBook :: GradeBook(string cName, string iName){
    setCourseName(cName);
    setInstructorName(iName);
}

void GradeBook :: setCourseName(string name){
    if (name.size() <= 25)
        courseName = name;
    else{
        courseName = name.substr(0, 25);
        cerr << "Course Name \"" << name << "\" exceeds maximum length (25).\n"
                "Limiting courseName to first 25 characters.\n\n";
    }
}

void GradeBook :: setInstructorName(string name){
    if (name.size() <= 30)
        instructorName = name;
    else{
        instructorName = name.substr(0,30);
        cerr << "Instructor Name \"" << name << "\" exceeds maximum length (30).\n"
                "Limiting instructorName to first 30 characters.\n\n";
    }
}

string GradeBook :: getCourseName() const{
    return courseName;
}

string GradeBook :: getInstructorName() const{
    return instructorName;
}

void GradeBook :: displayMessage() const{
    cout << "Welcome to the GradeBook for course: " 
         << getCourseName() << "!\n"
         << "This course is presented by: "
         << getInstructorName() << "!\n" 
         << endl;
}