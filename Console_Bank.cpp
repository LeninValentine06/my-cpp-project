#include <iostream>
using namespace std;

void show_balance(double balance);
double deposit();
double withdraw(double balance);

int main()
{
    int balance = 0;
    int choice = 0;

    cout<<"*****CONSOLE BANK*****\n";
    cout<<"\n";

    do
    {
    cout<<"Enter 1 to show balance. \n";
    cout<<"Enter 2 to deposit. \n";
    cout<<"Enter 3 to withdraw. \n";
    cout<<"Enter 4 to exit. \n";
    cout<<"Enter the choice(1-4): ";
    cin>>choice;

    switch (choice)
    {
    case 1: show_balance(balance);
        break;
    case 2: balance += deposit();
        show_balance(balance);
        break;
    case 3: balance-= withdraw(balance);
        show_balance(balance);
        break;
    case 4: cout<<"Thanks for visting!\n";
        break;
    default:
        cout<<"Enter valid choice.";
        break;
    }    } while (choice!=4);
    cout<<"\n";
    cout<<"***************************\n";
    return 0;

}

void show_balance(double balance){
    cout<<"Your balance is "<<balance<<"\n";
}
double deposit(){
    double amount;
    cout<<"Enter the amount to be deposited: ";
    cin>>amount;
    if(amount<0){
        cout<<"Enter a valid amount.\n";
        return 0;
    }
    else{
        return amount;
    }
}
double withdraw(double balance){
    int withdraw = 0;
    cout<<"Enter amount to withdraw: ";
    cin>>withdraw;
    if(withdraw>balance){
        cout<<"Account balance exceeded.\n";
        return 0;
    }
    if (withdraw<0){
        cout<<"Enter valid withdrawal amount.\n";
        return 0;
    }
    else{
        return withdraw;
    }
    return 0;
}