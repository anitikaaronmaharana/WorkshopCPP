#include<iostream>
using namespace std;

/*
We are checking if the user's pin number
matches the real pin (rPin) number and the
amount is greater than 5000
*/

int main(){
    int pin,rPin=2568;
    int amount;
    cout<<"Enter the PIN: "<<endl;
    cin>>pin;
    cout<<"Enter the amount: "<<endl;
    cin>>amount;
    //checking pin
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