#include <iostream>
#include <vector>
#include <limits>

void Show_Tasks(std::vector<std::string> &Tasks);
void Show_Finished_Tasks(std::vector<std::string> &finishedtasks);
void Add_Tasks(std::vector<std::string> &Tasks);
void Complete_Tasks(std::vector<std::string> &Tasks,  std::vector <std::string> &FinishedTasks);
void Delete_Tasks(std::vector<std::string> &Tasks);
int main(){

    int user_choice;
    std::vector <std::string> Tasks;
    std::vector <std::string> FinishedTasks;

    std::cout<<"*****To-Do List Manager*****\n";
    while (true)
    {
        std::cout<<"Enter 1 to show Tasks to be completed.\n";
        std::cout<<"Enter 2 to add new Tasks.\n";
        std::cout<<"Enter 3 to remove the completed tasks.\n";
        std::cout<<"Enter 4 to show the completed tasks.\n";
        std::cout<<"Enter 5 to delete tasks.\n";
        std::cout<<"Enter 6 to exit.\n";
        std::cout<<"Enter your choice: ";
        std::cin>>user_choice;

        switch (user_choice)
        {
        case 1:
            Show_Tasks(Tasks);
            break;
        
        case 2:
            std::cout<<"***************\n";
            Add_Tasks(Tasks);
            std::cout<<"***************\n";
            break;
        
        case 3:
            std::cout<<"***************\n";
            Complete_Tasks(Tasks, FinishedTasks);
            std::cout<<"***************\n";
            break;
        
        case 4:
            std::cout<<"***************\n";
            Show_Finished_Tasks(FinishedTasks);
            std::cout<<"***************\n";
            break;
        
        case 5:
            std::cout<<"***************\n";
            Delete_Tasks(Tasks);
            std::cout<<"***************\n";
            break;
        case 6:
            std::cout<<"***************\n";
            std::cout << "Exiting the program.\n";
            std::cout<<"***************\n";
            return 0;
    
        default:
            std::cout<<"***************\n";
            std::cout << "Invalid choice. Please enter a valid option.\n";
            std::cout<<"***************\n";
        }
    
    }
    return 0;
    
}

void Show_Tasks(std::vector<std::string> &Tasks){
    if (Tasks.empty()==true){
        std::cout<<"There are no tasks to be completed!\n";
    }
    else{
        std::cout<<"***************\n";
        std::cout<<"Task to be completed: \n";
        for(int i=0; i<Tasks.size();i++){
            std::cout<<"Task "<<i+1<<": "<<Tasks[i]<<'\n';
        }
        std::cout<<"***************\n";
    }
}

void Show_Finished_Tasks(std::vector<std::string> &finishedtasks){
    if (finishedtasks.empty()==true){
        std::cout<<"No Task hasn't been completed!\n";
    }
    else{
        std::cout<<"Completed Tasks: \n";
        for(int i=0; i<finishedtasks.size();i++){
            std::cout<<"Task "<<i+1<<": "<<finishedtasks[i]<<'\n';
        }
    }
}


void Add_Tasks(std::vector<std::string> &Tasks){
    std::string Task;
    std::cin.ignore();
    std::cout<<"Enter the Task to be added: ";
    std::getline(std::cin, Task);
    Tasks.emplace_back(Task);
    Show_Tasks(Tasks);
}

void Complete_Tasks(std::vector<std::string> &Tasks,std::vector <std::string> &FinishedTasks){
    int taskno;
    std::cout << "Enter the completed Task No: ";

    while (!(std::cin >> taskno) || taskno < 1 || taskno > Tasks.size()) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Invalid input. Please enter a valid task number: ";
    }

    std::string completed = Tasks[taskno - 1];
    Tasks.erase(Tasks.begin() + taskno - 1);
    FinishedTasks.emplace_back(completed);

    std::cout << "Task '" << completed << "' completed and moved to the finished tasks list.\n";
    std::cout << "Completed Tasks:\n";
    Show_Tasks(FinishedTasks);
}


void Delete_Tasks(std::vector<std::string> &Tasks) {
    int taskno;

    std::cout << "Enter the Task No to be deleted: ";
    while (!(std::cin >> taskno) || taskno < 1 || taskno > Tasks.size()) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Invalid input. Please enter a valid task number: ";
    }

    Tasks.erase(Tasks.begin() + taskno - 1);

    std::cout << "Deleted the Task\n";
    Show_Tasks(Tasks);
}
