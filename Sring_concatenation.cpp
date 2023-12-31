#include <iostream>
using namespace std;

string Concat_String(string input1, string input2);

int main()
{
    string input1,input2;
    cout<<"Enter String 1: ";
    getline(cin,input1);
    cout<<"Enter String 2: ";
    getline(cin,input2);
    cout<<Concat_String(input1,input2)<<endl;
    return 0;
}

string Concat_String(string input1, string input2){
    return input1 + ' ' + input2;
}