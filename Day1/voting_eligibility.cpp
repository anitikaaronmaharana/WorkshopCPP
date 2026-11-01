#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"Enter the age: "<<endl;
    cin>>age;
    bool isIndian=true;
    if(age>=18){
        if(isIndian){
            cout<<"Eligible to vote"<<endl;
        }
    }
    else{
        cout<<"Not eligible to vote"<<endl;
    }
}