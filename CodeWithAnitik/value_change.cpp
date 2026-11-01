#include<iostream>
using namespace std;

void valCh(int *p){
    *p=10;
}

int main(){
    int x=50;
    int *p=&x;
    cout<<x<<endl;
    return 0;
}