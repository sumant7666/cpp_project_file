#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
    cout<<"\n\t*****!Welcome to the number guessing game!*****"<<endl;
    cout<<"You have to guess a number between 1 to 100. ALL THE BEST.!";

    while(true){
        cout << "\nEnter the difficulty level: \n";
        cout << "1 for easy!\t\n";
        cout<<"2 for medium!\t\n";
        cout<<"3 for difficult!\t\n";
        cout<<"4 exit !\n";

        int Choice ;
        cout<<"Enter the number: ";
        cin>>Choice;
        srand(time(0));
        int Number = 1 + (rand()% 100);
        int playerChoice;

        if(Choice==1){
            cout << "\nYou have 15 choices for finding the  number between 1 to 100.";
            int choicesLeft=15;
            for(int i=1;i<=15;i++){
                cout << "\n\nEnter the number: ";
                cin>>playerChoice;
                if(playerChoice==Number){
                    cout << "Well played! You won, " << playerChoice << " is the number" << endl;
                    cout << "\t\t\t Thanks for playing...." << endl;
                    cout<<"Play the game again with us!!\n\n"<<endl;
                    break;
                }else{
                    cout << " " << playerChoice << " is not the right number\n";
                    if(playerChoice>Number){
                        cout << "your entered number is smaller than the number you have chosen" << endl;
                    }
                    else{
                        cout << "your entered  number is greater than the number you have chosen" << endl;
                    }
                    choicesLeft--;
                    cout << choicesLeft << " choices left. " << endl;
                    if(choicesLeft==0){
                        cout << "You couldn't find the secret number, it was "<<Number<<", You lose!!\n\n";
                        cout<<"Play the game again to win!!!\n\n";
                    }
                }

            }
        }
        else if(Choice==2){
            cout << "\nYou have 10 choices for finding the secret number between 1 to 100.";
            int choicesLeft=10;
            for(int i=1;i<=10;i++){
                cout << "\n\nEnter the number: ";
                cin>>playerChoice;
                if(playerChoice==Number){
                    cout << "Well played! You won, " << playerChoice << " is the secret number" << endl;
                    cout << "\t\t\t Thanks for playing...." << endl;
                    cout<<"Play the game again with us!!\n\n"<<endl;
                    break;
                }else{
                    cout << "" << playerChoice << " is not the right number\n";
                    if(playerChoice>Number){
                        cout << "your entered number is smaller than the number you have chosen" << endl;
                    }
                    else{
                        cout << "your entered number is greater than the number you have chosen" << endl;
                    }
                    choicesLeft--;
                    cout << choicesLeft << " choices left. " << endl;
                    if(choicesLeft==0){
                        cout << "You couldn't find the secret number, it was "<<Number<<", You lose!!\n\n";
                        cout<<"Play the game again to win!!!\n\n";
                    }
                }
            }
        }
        else if(Choice==3){
            cout << "\nYou have 5 choices for finding the  number between 1 to 100.";
            int choicesLeft=5;
            for(int i=1;i<=5;i++){
                cout << "\n\nEnter the number: ";
                cin>>playerChoice;
                if(playerChoice==Number){
                    cout << "Well played! You won, " << playerChoice << " is the secret number" << endl;
                    cout << "\t\t\t Thanks for playing...." << endl;
                    cout<<"Play the game again with us!!\n\n"<<endl;
                    break;
                }else{
                    cout << " " << playerChoice << " is not the right number\n";
                    if(playerChoice>Number){
                        cout << "your entered  number is smaller than the number you have chosen" << endl;
                    }
                    else{
                        cout << "your entered number is greater than the number you have chosen" << endl;
                    }
                    choicesLeft--;
                    cout << choicesLeft << " choices left. " << endl;
                    if(choicesLeft==0){
                        cout << "You couldn't find the secret number, it was "<<Number<<", You lose!!\n\n";
                        cout<<"Play the game again to win!!!\n\n";
                    }
                }

            }
        }
        else if(Choice==0){
            exit(0);
        }
        else{
            cout << "Wrong choice, Enter valid choice to play the game! (0,1,2,3)"<<endl;
        }
    }
    return 0;
}
