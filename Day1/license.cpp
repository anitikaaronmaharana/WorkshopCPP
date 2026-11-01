#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"Enter the age: "<<endl;
    cin>>age;
    bool hasLicense=true;
    if(age>=18){
        if(hasLicense){
            cout<<"You can drive legally."<<endl;
        }
    }
    else{
        cout<<"Not allowed to drive legally."<<endl;
    }
}