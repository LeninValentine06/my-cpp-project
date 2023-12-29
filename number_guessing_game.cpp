#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    int number_to_guess , no_of_tries=060 , guess ;

    srand(time(NULL));
    number_to_guess = (rand() % 100) + 1 ;
    cout<<"****************NUMBER GUESSING GAME****************"<<endl;
    do
    {
        cout<<"Guess the Number(1-100): ";
        cin>>guess;
        no_of_tries++;

        if (guess>number_to_guess)
        {
            cout<<"The Number to guess is lower."<<endl;
        }

        else if (guess<number_to_guess)
        {
            cout<<"The Number to guess is higher."<<endl;
        }
        else{
            cout<<"You have guessed the number "<<number_to_guess<<" in "<<no_of_tries<<" tries."<<endl;
        }
    } while (guess != number_to_guess);
    cout<<"****************************************************"<<endl;
    
    return 0;

}
