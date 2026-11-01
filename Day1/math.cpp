#include<iostream>
using namespace std;

int main(){
    int choice;
    cout<<"Enter a choice: "<<endl;
    cin>>choice;
    switch(choice){
        case 1:
            cout<<"Addition"<<endl;
            break;
        case 2:
            cout<<"Subtraction"<<endl;
            break;
        case 3:
            cout<<"Multiplication"<<endl;
            break;
        case 4:
            cout<<"Division"<<endl;
            break;
        case 5:
            cout<<"Invalid choice"<<endl;
    }
    return 0;
}