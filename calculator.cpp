#include<iostream>
using namespace std;
int main(){
   int choice;
    int num1,num2;
    while(choice){ 
    cout<<"1. addiction\n";
    cout<<"2. subtraction\n";
    cout<<"3. multiplication\n";
    cout<<"4. division\n";
    cout<<"5. exit(0)\n";
    cout<<"enter your choice:";
    cin>>choice;
    cout<<"enter  num1:\n";
    cin>>num1;
    cout<<"enter num2:\n";
    cin>>num2;
    switch(choice){
        case 1:
             cout<<"addiction=";
             cout<<num1+num2<<endl;
             break;

        case 2:
             cout<<"subtraction=";
             cout<<num1-num2<<endl;
             break;
        case 3:
             cout<<"multiplication=";
             cout<<num1*num2<<endl;
             break;
        case 4:
             cout<<"division=";
             cout<<num1/num2<<endl;
             break;
        case 5:
          cout<<"exit(0)";
             exit(0);
             break;
        default:
              cout<<"you enter wrong choice: please enter the currectchoice"<<endl;
              break;
    }
    }
return 0;
}