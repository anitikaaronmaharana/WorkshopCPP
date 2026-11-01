#include <iostream>
using namespace std;

class ATM{
public:
    void withdraw(){
        cout<<"Withdrawal processing..."<<endl;
    }
};

int main(){
    ATM atm;
    atm.withdraw();
    return 0;
}