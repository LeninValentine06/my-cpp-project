#include <iostream>
using namespace std;

int main()
{
    double number1, number2;
    char operation;

    cout<<"***************CALCULATOR***************\n";
    cout<<"Enter the any one operation(+,-,*,/): ";
    cin>>operation;

    cout<<"Enter Number 1: ";
    cin>>number1;
    cout<<"Enter Number 2: ";
    cin>>number2;

    switch (operation)
    {
    case '+':
        cout<<"Result: "<<number1+number2<<endl;
        break;
    case '-':
        cout<<"Result: "<<number1-number2<<endl;
        break;
    case '*':
        cout<<"Result: "<<number1*number2<<endl;
        break;
    case '/':
        cout<<"Result: "<<number1/number2<<endl;
        break;
    
    default:
        cout<<"Enter valid inputs."<<endl;
        break;
    }

    cout<<"***************************************"<<endl;

    return 0;


}