#include <iostream>
using namespace std;


void increaseSalary(float *salary) {
    *salary = *salary + 5000;   
}

void increaseSalary(float *salary);

int main() {
    float salary;

    cout << "Enter employee salary: ";
    cin >> salary;

    cout << "Salary before increment: " << salary << endl;


    increaseSalary(&salary);

    cout << "Salary after increment: " << salary << endl;

    return 0;
}


