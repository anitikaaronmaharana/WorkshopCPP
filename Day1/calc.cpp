#include<iostream>
using namespace std;

int main(){
    char op;
    double x,y,res;
    cout<<"Enter any operator of your choice: (+, -, *, /): "<<endl;
    cin>>op;
    cout<<"Enter any two values: "<<endl;
    cin>>x>>y;
    switch(op){
        case '+':
            res = x + y;
            break;
        case '-':
            res = x - y;
            break;
        case '*':
            res = x * y;
            break;
        case '/':
            res = y / x;
            break;
        default:
            cout<<"Invalid choice"<<endl;
    }
    cout<<"Result: "<<res<<endl;
    return 0;
}