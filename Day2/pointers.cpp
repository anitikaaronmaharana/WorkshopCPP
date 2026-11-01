#include<iostream>
using namespace std;

int main(){
    int n = 10;
    int *p = &n;
    *p = 50;
    cout<<n<<endl;
    return 0;
}