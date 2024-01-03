#include <iostream>
#include <ctime>

char user_choice();
char computer_choice();
void winner(char player_input,char computer_input );

int main() {
    char player_input, computer_input;

    std::cout << "Welcome to Rock Paper and Scissor game!" << "\n";
    std::cout << "Enter 'R' for Rock\nEnter 'P' for Paper\nEnter 'S' for Scissor" << "\n";
    player_input = user_choice();
    switch (player_input) {
        case 'R': std::cout << "You choose Rock." << "\n"; break;
        case 'P': std::cout << "You choose Paper." << "\n"; break;
        case 'S': std::cout << "You choose Scissor." << "\n"; break;
    }
    computer_input = computer_choice();
    switch (computer_input) {
        case 'R': std::cout << "Computer choose Rock." << "\n"; break;
        case 'P': std::cout << "Computer choose Paper." << "\n"; break;
        case 'S': std::cout << "Computer choose Scissor." << "\n"; break;
    }

    winner(player_input,computer_input);

    return 0;
}

char user_choice() {
    char user_input;
    do {
        std::cout << "Enter your choice: ";
        std::cin >> user_input;
        if (user_input != 'R' && user_input != 'P' && user_input != 'S') {
            std::cout << "Enter valid choice!" << '\n';
        }
    } while (user_input != 'R' && user_input != 'P' && user_input != 'S');
    return user_input;
}

char computer_choice() { 
    char computer_prediction;
    srand(time(NULL));
    int random_number = (rand() % 3) + 1;
    switch (random_number) {
        case 1: computer_prediction = 'R'; break;
        case 2: computer_prediction = 'P'; break;
        case 3: computer_prediction = 'S'; break;
    }
    return computer_prediction;
}

void winner(char player_input, char computer_input){
    switch(player_input){
        case 'R': 
        if(computer_input == 'R'){
            std::cout<<"Its a tie.";break;
        }
        else if (computer_input == 'S'){
            std::cout<<"You win!";break;
        }
        else{
            std::cout<<"You loose";break;
        }
        case 'S':
        if(computer_input == 'S'){
            std::cout<<"Its a tie.";break;
        }
        else if (computer_input == 'P'){
            std::cout<<"You win!";break;
        }
        else{
            std::cout<<"You loose";break;
        }
        case 'P':
        if(computer_input == 'P'){
            std::cout<<"Its a tie.";break;
        }
        else if (computer_input == 'R'){
            std::cout<<"You win!";break;
        }
        else{
            std::cout<<"You loose";break;
        }

                    
    }

}