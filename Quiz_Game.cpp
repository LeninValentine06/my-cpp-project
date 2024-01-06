#include <iostream>
#include <ctime>

int main(){

    int score = 0;
    int user_input;

    std::string Questions[] = {"1.) Which movie features the line, 'Here's looking at you, kid'?",
                                "2.) Who played the lead role in the 1990 movie 'Pretty Woman'?",
                                "3.) What is the name of the lion in Disney's 'The Lion King'?",
                                "4.) Which movie is known for the quote, 'You can't handle the truth!'?",
                                "5.) In the movie 'The Shawshank Redemption,' what is the name of the main character?",
                                "6.) Which film features the character Hannibal Lecter?"};

    std::string Options[][4] = {
                            {"1. Casablanca", "2. Gone with the Wind", "3. The Godfather", "4. Citizen Kane"},
                            {"1. Meryl Streep", "2. Julia Roberts", "3. Sandra Bullock", "4. Demi Moore"},
                            {"1. Mufasa", "2. Simba", "3. Scar", "4. Timon"},
                            {"1. A Few Good Men", "2. Apocalypse Now", "3. The Usual Suspects", "4. Braveheart"},
                            {"1. Andy Dufresne", "2. Ellis Boyd \"Red\" Redding", "3. Brooks Hatlen", "4. Warden Samuel Norton"},
                            {"1. Se7en", "2. The Silence of the Lambs", "3. The Sixth Sense", "4. American Psycho"}};
    
    
    int Answers[6] = {1, 2, 2, 1, 1, 2};

    for (int i = 0; i<sizeof(Questions)/sizeof(Questions[0]); i++){
        std::cout<<Questions[i]<<'\n';
        for ( int j = 0; j < 4; j++ ){
                std::cout<<Options[i][j]<<'\n';

            }
        
        std::cout<<"Enter your answer (1-4): ";
        std::cin>>user_input;
        if(user_input == Answers[i]){
            std::cout<<"Correct Answer!"<<'\n';
            std::cout<<"\n";
            score++;
        }
        else{
            std::cout<<"Wrong Answer!"<<'\n';
            std::cout<<'\n';
        }

    }
    
    std::cout<<"Your score is: "<<score;
    return 0;
}


    
    

