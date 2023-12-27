#include <iostream>
using namespace std;

int main()
{
    double Temperature_input;
    double Temperature_output;
    int conversion;

    cout<<"***************Temperature Convertor***************\n";
    cout<<"Enter 1 to convert Celsius to Fahrenheit.\n";
    cout<<"Enter 2 to convert Fahrenheit to Celsius.\n";
    cout<<"Enter 3 to convert Celsius to Kelvin.\n";
    cout<<"Enter 4 to convert Kelvin to Celsius.\n";
    cout<<"Enter 5 to convert Fahrenheit to Kelvin.\n";
    cout<<"Enter 6 to convert Kelvin to Fahrenheit.\n";

    cout<<"Enter here: ";
    cin>>conversion;

    switch (conversion)
    {
    case 1:
        cout<<"Enter the temperature: ";
        cin>>Temperature_input;
        Temperature_output= (9.0 / 5.0) * Temperature_input + 32;
        cout<<"It is "<<Temperature_output<<" Fahrenheit."<<endl;
        break;
    case 2:
        cout<<"Enter the temperature: ";
        cin>>Temperature_input;
        Temperature_output= (5.0 / 9.0) * (Temperature_input - 32);
        cout<<"It is "<<Temperature_output<<" Celsius."<<endl;
        break;
    case 3:
        cout<<"Enter the temperature: ";
        cin>>Temperature_input;
        Temperature_output= Temperature_input + 273.15;
        cout<<"It is "<<Temperature_output<<" Kelvin."<<endl;
        break;
    case 4:
        cout<<"Enter the temperature: ";
        cin>>Temperature_input;
        Temperature_output= Temperature_input - 273.15;
        cout<<"It is "<<Temperature_output<<" Celsius."<<endl;
        break;
    case 5:
        cout<<"Enter the temperature: ";
        cin>>Temperature_input;
        Temperature_output= (5.0 / 9.0) * (Temperature_input - 32) + 273.15;
        cout<<"It is "<<Temperature_output<<" Kelvin."<<endl;
        break;
    case 6:
        cout<<"Enter the temperature: ";
        cin>>Temperature_input;
        Temperature_output= (9.0 / 5.0) * (Temperature_input - 273.15) + 32 ;
        cout<<"It is "<<Temperature_output<<" Fahrenheit."<<endl;
        break;
    
    default:
        cout<<"Enter valid input."<<endl;
        break;
    }
    cout<<"**************************************************\n";
    return 0;
} 