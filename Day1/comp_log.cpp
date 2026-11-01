#include<iostream>
using namespace std;

int main(){
    int age = 10;
    int marks = 85;
    cout<<(age>=18 && age<=25)<<endl;
    cout<<(marks>=90 || marks>=80)<<endl;
    cout<<!(age<18)<<endl;
    return 0;
}