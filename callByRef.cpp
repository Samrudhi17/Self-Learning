#include <iostream>
using namespace std;




void deposit(float &balance, float amount) {
    balance += amount;   
}

int main() {
    float balance, amount;

    cout << "Enter your current bank balance: ";
    cin >> balance;

    cout << "Enter deposit amount: ";
    cin >> amount;

    cout << "Balance before deposit: " << balance << endl;

    
    deposit(balance, amount);

    cout << "Balance after deposit: " << balance << endl;

    return 0;
}


