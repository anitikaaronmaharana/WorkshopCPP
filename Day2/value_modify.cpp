#include<iostream>
using namespace std;

void modify(int *p){
    *p = 10;
}

int main(){
    int x;
    int *p=&x;
    x=50;
    cout<<x<<endl;
    return 0;
}