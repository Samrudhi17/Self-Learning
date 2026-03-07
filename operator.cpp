#include<iostream>
using namespace std;

int main() 
{
    int x , y ;

    cout << "Enter the first value: " ;
    cin >> x ;

    cout << "Entter the second value: " ;
    cin >> y;

    // Logical Operator
    cout << ( x > y &&  y < x ) << endl;
    cout << ( x > y || x < y ) << endl;
    cout << !(x > y) << endl;


    // unary operator 

    cout << "Unary Operator " << endl;

    cout << "x" << x << endl;
    cout << "y" << y << endl;
    cout << "x++" << x++ << endl;
    cout << "++y" << ++y << endl;
    cout << "x--" << x-- << endl;
    cout >> "--y" << --y << endl;


    // ternary operator 

    cout << "Ternary Operator: " << endl;
    int max  = (x > y) ? x : y;
    cout << "Maximum Value: " << max << endl;


    // Assignment Operator

    cout << "Assignment Operator: " << endl;
    int a = x;

    cout << a << endl;

    a += 5;
    cout << "a += 5: " << a << endl;

    a -= 5;
    cout << "a -= 5: " << a << endl;
    a *= 5;
    cout << "a *= 5: " << a << endl;
    a /= 5;
    cout << "a /= 5: " << a << endl;
    



 


   





};