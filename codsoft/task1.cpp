// Number guessing game

#include<iostream>

using namespace std;

int main(){
    
    int rand_num = rand()%(100-1+1) + 1;
    int guess_num;
    int attempts = 0;
    int correct = false;

    while(!correct){
        cout<<"Guess random number between 2 to 100: ";
        cin>>guess_num;
        attempts++;

        if(rand_num == guess_num){
            cout<<"Congratulations! You guessed the number "<<rand_num<<" correctly in "<<attempts<<" attempts."<<endl;
            correct = true;
        }
        else if(rand_num > guess_num){
            cout<<"Too low! Try again"<<endl;
        }
        else{
            cout<<"Too high! Try again"<<endl;
        }

        
    }

    return 0;
}