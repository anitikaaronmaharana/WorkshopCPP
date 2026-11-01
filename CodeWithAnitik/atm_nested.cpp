#include<iostream>
using namespace std;

int main(){
    int pin,rPin=2004;
    int amount;
    cin>>pin;
    cin>>amount;
    if(pin==rPin){
        if(amount>=5000){
            cout<<"Withdrawal accepted"<<endl;
        }
        else{
            cout<<"Withdrawal rejected"<<endl;
        }
    }
    else{
        cout<<"Invalid PIN number! Try again!"<<endl;
    }
    return 0;
}