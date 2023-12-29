#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    srand(time(NULL));
    int rolled_number = rand();
    int number_of_sides;
    int number_of_dices;

    cout<<"*******************DICE ROLLING SIMULATOR*******************"<<endl;
    cout<<"Enter the number of dice to be rolled: ";
    cin>>number_of_dices;
    cout<<"Enter the number of sides of the dice: ";
    cin>>number_of_sides;

    for(int i = 0;i<number_of_dices;++i){
        rolled_number = (rand() % number_of_sides)+1;
        cout<<"The number in dice "<<i+1<<" is: "<<rolled_number<<endl;
    }
    cout<<"************************************************************"<<endl;
    return 0;
}