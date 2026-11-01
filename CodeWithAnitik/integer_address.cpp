#include<iostream>
using namespace std;

int main(){
    int x;
    cin>>x;
    int *ptr=&x;
    cout<<x<<endl;
    cout<<&x<<endl;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    return 0;
}