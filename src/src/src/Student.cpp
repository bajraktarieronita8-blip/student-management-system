#include <iostream>
#include "Student.h"

Student::Student(std::string n, int a) {
    name = n;
    age = a;
}

void Student::display() {
    std::cout << "Name: " << name << ", Age: " << age << std::endl;
}
