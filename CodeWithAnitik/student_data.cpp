#include <iostream>
using namespace std;

class Student{
    public:
        string name;
        float cgpa;
        int rollNo,regNo;
};

int main(){ 
    Student s;
    s.name="Anitik";
    s.cgpa=5.5;
    s.rollNo=1;
    s.regNo=202400001;
    cout<<s.name<<" "<<s.cgpa<<s.rollNo<<s.regNo<<endl;
    return 0;
}