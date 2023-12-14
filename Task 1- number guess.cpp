#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
    srand(static_cast<unsigned int>(time(nullptr)));
    int secretNumber=rand()%100+1;
    int userGuess;
    int attempts=0;
    cout<<"Welcome to Number Guessing Game!"<<endl;
    cout<<"Try to guess the number between 1 and 100."<<endl;
    do{
        cout<<"Enter your guess: ";
        cin>>userGuess;
        if(cin.fail()){
           cin.clear();
           cin.ignore(INT_MAX,'\n');
           cout<<"Invalid input. Please enter a valid number."<<endl;
            continue;
        }
        attempts++;
        if(userGuess==secretNumber){
            cout<<"Congratulations!!!You guessed the correct number in "<<attempts<<"attempts."<<endl;
        }else if(userGuess<secretNumber){
            cout<<"Too low!Try again."<<endl;
        }else{
            cout<<"Too high!Try again."<<endl;
        }
    } while(userGuess!=secretNumber);
    return 0;
}
