#include <iostream>
#include "Student.h"
using namespace std;

int main() {
    cout<<"parameterized constructor output "<<endl;
    Student r(43,65);
    r.showData();
    cout<<"\n\ncopy constructor output "<<endl;
    Student scopy(r);
    scopy.showData();

    return 0;
}