#include<iostream>
#include<vector>
#include<algorithm>

struct Task{
    std::string desc;
};

void display(){
   std::cout<<"\n=== ToDO List Manager ====\n";
   std::cout<<"1. Add Task\n";
   std::cout<<"2. View Task\n";
   std::cout<<"3. Delete Task\n";
   std::cout<<"4. Quit\n";
   std::cout<<"===============================\n";

}

void addTask(std::vector<Task>& tasks){
    Task newTask;
    std::cout<<"Enter task description: ";
    std::getline(std::cin>> std::ws, newTask.desc);
    tasks.push_back(newTask);
    std::cout<<"Task added Successfully!\n";
}

void viewTasks(const std::vector<Task>& tasks){
    if(tasks.empty()){
        std::cout<<"No tasks available.\n";
    }
    else{
          std::cout<<"\n==== Task List ====\n";
          for(size_t i=0;i<tasks.size();++i){
            std::cout<<i + 1<< ". " <<tasks[i].desc<<'\n';
          }
          std::cout<<"===================\n";
    }
}

void deleteTask(std::vector<Task>& tasks){
    viewTasks(tasks);
    if(tasks.empty()){
        return;
    }

    int choice;
    std::cout<<"Enter the task number to delete: ";
    std::cin>>choice;

    if(choice>=1&&choice<=static_cast<int>(tasks.size())){
        tasks.erase(tasks.begin()+choice - 1);
        std::cout<<"Task deleted Successfully!\n";
    }
    else{
        std::cout<<"Invalid task number.\n";
    }
}

int main() {
    std::vector<Task> tasks;
    int option;
    do{
        display();
        std::cout<<"Enter your choice (1-4): ";
        std::cin>>option;

        switch(option){
            case 1:
              addTask(tasks);
              break;
            case 2:
              viewTasks(tasks);
              break;
            case 3:
              deleteTask(tasks);
              break;
            case 4:
              std::cout<<"Exiting program!\n";
              break;
            default:
              std::cout<<"Invalid choice.Try again.\n";

        }
    }
    while(option!=4);
    return 0;
}