#include<iostream>
using namespace std;

int main(){
    int n=25;
    for(int i=1;i<=n;i++){
        cout<<2*i;
        if(i<n){
            cout<<" ";
        }
    }
    return 0;
}