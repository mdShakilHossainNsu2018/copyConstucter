//
// Created by shakil on 3/26/19.
//

#ifndef COPYCONSTUCTER_STUDENT_H
#define COPYCONSTUCTER_STUDENT_H


class Student {
    int roll;
    int mark;
public:
    Student(int r, int m);
    Student(Student &t);
    void showData();
};


#endif //COPYCONSTUCTER_STUDENT_H
