#include<iostream>
using namespace std;
class Student{
    public:
        string name;
        float cgpa;
        int rollNo;
};
int main(){
    Student s;
    s.name="Anitik";
    s.cgpa=5.5;
    s.rollNo=1;
    return 0;
}