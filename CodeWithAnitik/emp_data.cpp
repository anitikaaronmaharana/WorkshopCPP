#include <iostream>
using namespace std;

class Employee{
    public:
        string empName;
        float salary;
        int empID;
};

int main(){ 
    Employee e1,e2;
    e1.empName="Tarun";
    e2.empName="Ajay";
    e1.salary=50000;
    e2.salary=100000;
    e1.empID=101;
    e2.empID=102;
    cout<<e1.empName<<" "<<e1.salary<<e1.empID<<endl;
    cout<<e2.empName<<" "<<e2.salary<<e2.empID<<endl;
    return 0;
}