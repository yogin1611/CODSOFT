#include <iostream>
using namespace std;
int main(){
    char choice;
    do{
        double num1,num2,result;
        char operation;
        cout<<"Enter first number: ";
        cin>>num1;
        cout<<"Enter second number: ";
        cin>>num2;
        cout<<"Choose an operation (+, -, *, /): ";
        cin>>operation;
        switch(operation){
            case '+':
                result=num1+num2;
                break;
            case '-':
                result=num1-num2;
                break;
            case '*':
                result=num1*num2;
                break;
            case '/':
                if(num2!=0){
                    result=num1/num2;
                } else{
                    cout<<"Error: Cannot divide by zero."<<endl;
                    return 1;
                }
                break;
            default:
                cout<<"Error: Invalid operation."<<endl;
                return 1;
        }
        cout<<"Result: "<<result<<endl;
        cout<<"Do you want to perform another calculation? (y/n): ";
        cin>>choice;
    } while(choice=='y'||choice=='Y');

    cout<<"Program terminated. Goodbye!"<<endl;
    return 0;
}
