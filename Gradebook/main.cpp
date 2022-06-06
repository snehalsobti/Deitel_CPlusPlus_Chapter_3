#include <iostream>
#include "Gradebook.h"
using namespace std;

int main(){
    GradeBook gradebook1("CS101 Intro to Programming", "Sam");
    GradeBook gradebook2("CS102 Data Structures", "Surovar Abrashami Harminder Singh");
    gradebook1.displayMessage();
    gradebook2.displayMessage();
}