#include<iostream>
using namespace std;

int main(){
    int marks;
    cin>>marks;
    if(marks>=85){
        cout<<"S Grade"<<endl;
    }
    else if(marks>=75){
        cout<<"A Grade"<<endl;
    }
    else if(marks>=65){
        cout<<"B Grade"<<endl;
    }
    else if(marks>=55){
        cout<<"C Grade"<<endl;
    }
    else if(marks>=45){
        cout<<"D Grade"<<endl;
    }
    else if(marks>=35){
        cout<<"E Grade"<<endl;
    }
    else{
        cout<<"F Grade"<<endl;
    }
    return 0;
}