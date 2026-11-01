#include<iostream>
using namespace std;

int main(){
    char op;
    int a,b,res;
    cout<<"Enter your operator (+, -, *, /)"<<endl;
    cin>>op;
    cout<<"Enter the values of a and b: "<<endl;
    cin>>a>>b;
    switch(op){
        case '+':
            res = a + b;
            break;
        case '-':
            res = a - b;
            break;
        case '*':
            res = a * b;
            break;
        case '/':
            res = a / b;
            break;
        default:
            cout<<"Invalid operator!"<<endl;
    }
    cout<<res<<endl;
    return 0;
}