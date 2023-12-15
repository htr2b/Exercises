#include <iostream>
#include <stdlib.h>
using namespace std;
const char ROCK = 'r';
const char PAPER = 'p';
const char SCISSORS = 's';
char getComputerMove(){
    srand(time(0));
    int num=rand()%3+1;
    if(num==1) return 'r';
    if(num==2) return 'p';
    if(num==3) return 's';
}
char getUserMove(){
    char user;
    cout<<"Choose one of the options"<<endl;
    cout<<endl;
    cout<<"(r) for Rock"<<" (p) for Paper"<<" (s) for Scissors"<<endl;
    cin>>user;
    while(user!='r'&&user!='p'&&user!='s'){
        cout<<"Please choose one of the following options only."<<endl;
        cout<<"(r) for Rock"<<" (p) for Paper"<<" (s) for Scissors"<<endl;
        cin>>user;
    }return user;
}
void chooseWinner(char uChoice, char cChoice) {
    cout<<"Your choice: "<<uChoice<<"  Computer's choice: "<<cChoice<<endl;
    if (uChoice == ROCK && cChoice == PAPER) {
        cout<< "Computer Wins! Paper wraps Rock."<< endl;
    }
    else if (uChoice == PAPER && cChoice == SCISSORS) {
        cout << "Computer Wins! Scissors cut Paper."<< endl;

    }
    else if (uChoice == SCISSORS && cChoice == ROCK) {
        cout << "Computer Wins! Rock smashes Scissors."<< endl;

    }
    else if (uChoice == ROCK && cChoice == SCISSORS) {
        cout << "You Win! Rock smashes Scissors."<< endl;

    }
    else if (uChoice == PAPER && cChoice == ROCK) {
        cout << "You Win! Paper wraps Rock."<< endl;

    }
    else if (uChoice == SCISSORS && cChoice == PAPER) {
        cout << "You Win! Scissors cut Paper."<< endl;
    }
    else{
        cout << "Tie." << endl;
    }
}
int main() {
    cout<< "Welcome to Rock Paper Scissors Game"<<endl;
    char uChoice;
    char cChoice;
    char playAgain='y';
    while(playAgain=='y'){
    uChoice=getUserMove();
    cChoice=getComputerMove();
    chooseWinner(uChoice,cChoice);
    cout<<"Do you want to play again? (y) for Yes, any button for No"<<endl;
    cin>>playAgain;
    }
    return 0;
}
