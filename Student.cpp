//
// Created by shakil on 3/26/19.
//

#include <iostream>
#include "Student.h"

using namespace std;

Student::Student(int r, int m) {
    roll = r;
    mark = m;
}

Student::Student(Student &t) {
    roll = t.roll;
    mark = t.mark;
}

void Student::showData() {
    cout<<"Roll : "<<roll<<endl;
    cout<<"Mark : "<<mark<<endl;
}
