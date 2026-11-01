#include<iostream>
using namespace std;

int main(){
    char op;
    int a,b,res;
    cin>>op;
    cin>>a>>b;
    switch(op){
        case '+':
            res=a+b;
            break;
        case '-':
            res=a-b;
            break;
        case '*':
            res=a*b;
            break;
        case '/':
            res=a/b;
            break;
        default:
            cout<<"Invalid"<<endl;
    }
    cout<<res<<endl;
    return 0;
}