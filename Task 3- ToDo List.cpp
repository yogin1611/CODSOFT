#include<iostream>
#include<vector>
#include<string>
using namespace std;
struct Task{
    string description;
    bool completed;};
void displayMenu();
void addTask(vector<Task>&tasks);
void viewTasks(const vector<Task>&tasks);
void markAsCompleted(vector<Task>&tasks);
void removeTask(vector<Task>&tasks);
int main(){
    vector<Task>tasks;
    int choice;
    do{
        displayMenu();
        cin>>choice;
        switch(choice){
            case 1:
                addTask(tasks);
                break;
            case 2:
                viewTasks(tasks);
                break;
            case 3:
                markAsCompleted(tasks);
                break;
            case 4:
                removeTask(tasks);
                break;
            case 5:
                cout<<"Exiting the to-do list manager. Goodbye!"<<endl;
                break;
            default:
                cout<<"Invalid choice. Please try again."<<endl;}}
                while(choice!=5);
    return 0;}
void displayMenu(){
    cout<<"\nTo-Do List\n";
    cout<<"1.Insert Task\n";
    cout<<"2.View Tasks\n";
    cout<<"3.Mark Completed\n";
    cout<<"4.Delete Task\n";
    cout<<"5.Exit\n";
    cout<<"Enter your choice: ";}
void addTask(vector<Task>&tasks) {
    Task newTask;
    cout<<"Enter the task:";
    cin.ignore();
    getline(cin,newTask.description);
    newTask.completed=false;
    tasks.push_back(newTask);
    cout<<"Task added successfully!\n";}
void viewTasks(const vector<Task>&tasks){
    cout<<"\nTask List:\n";
    for(size_t i=0;i<tasks.size();++i){
        cout<<i+1<<". ";
        if(tasks[i].completed){
            cout<<"[Completed] ";
        }else{
            cout<<"[Pending]";}
        cout<<tasks[i].description<<endl;}}
void markAsCompleted(vector<Task>&tasks){
    viewTasks(tasks);
    size_t taskIndex;
    cout<<"Enter the number of the task to mark as completed: ";
    cin>>taskIndex;
    if(taskIndex>0&&taskIndex<=tasks.size()){
        tasks[taskIndex-1].completed=true;
        cout<<"Task marked as completed!\n";}
        else{
        cout<<"Invalid task number.Please try again.\n";}}
void removeTask(vector<Task>&tasks){
    viewTasks(tasks);
    size_t taskIndex;
    cout<<"Enter the number of the task to remove: ";
    cin>>taskIndex;
    if(taskIndex>0&&taskIndex<=tasks.size()){
        tasks.erase(tasks.begin()+taskIndex-1);
        cout<<"Task removed successfully!\n";
    }else{
        cout<<"Invalid task number.Please try again.\n";}}
