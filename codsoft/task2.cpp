// Simple calculator

#include<iostream>

using namespace std;

int main(){
    char operation;
    double num1 = 0;
    double num2 = 0;

    cout<<"Enter first number";
    cin>>num1;
    cout<<"Enter second number";
    cin>>num2;
    cout<<"Enter operation (+ , - , * , / )";
    cin>>operation;

    switch(operation){
        case '+':
            cout<<"result:"<<num1+num2<<endl;
            break;
        case '-':
            cout<<"result:"<<num1-num2<<endl;
            break;
        case '*':
            cout<<"result:"<<num1*num2<<endl;
            break;
        case '/':
            if(num2 != 0){
                 cout<<"result:"<< num1/num2 <<endl;
            }  
            else{
                cout<<"Error! Division by zero."<<endl;
            } 
            break;
        default:
           cout<<"Invalid operation!"<<endl;
    }

    return 0;
}