#include<iostream>
#include<vector>
#include<string>
using namespace std;
 string description;

struct task{
    string description;
    bool completed;
};
class todolist{
    private:
    vector<task> tasks;
    public:
    void addtask(const string& description){
        task newtask={description,false};
        tasks.push_back(newtask);
        cout<<"task added successfully!"<<endl;
    }
    
    void viewtask(){
        if(tasks.empty()){
            cout<<"no task in this list!"<<endl;
        }
        else{
            cout<<"to_do_list!"<<endl;
            for(size_t i=0; i<tasks.size();++i){
                cout<<i+1<<"."<<(tasks[i].completed? "[completed!]":"[not completed6]")<<""<<tasks[i].description<<endl;
            }
        }
    }
    void marktask_is_completed( int taskindex){
        if(taskindex>=1 && taskindex<=static_cast<int>(tasks.size())){
            tasks[taskindex-1].completed=true;
            cout<<"task marked as completed"<<endl;
        }
        else{
            cout<<"invalid task index! please enter the valid index:"<<endl;
        }
    }
    void remove_task( int taskindex){
        if(taskindex>=1 && taskindex<=static_cast<int>(tasks.size())){
            tasks.erase(tasks.begin()+taskindex-1);
            cout<<"task removed  successfully"<<endl;
        }
        else{
             cout<<"invalid task index! please enter the valid index:"<<endl;
        }
    }
};
    void display(){
        cout<<"\n to do list manager!"<<endl;
        cout<<"1. add task!"<<endl;
        cout<<"2. view task!"<<endl;
        cout<<"3. mark as completed the tasks!"<<endl;
        cout<<"4. remove the task!"<<endl;
        cout<<"5. exit(0)!"<<endl;
        cout<<"enter your choice:";
    }

    int main(){
        todolist todolist;
        int choice;
        do{
            display();
            
            cin>>choice;
            switch(choice)
            {
                case 1:
                cout<<"enter task description:";
                cin.ignore();
               
                getline(cin,description);
                todolist.addtask(description);
                break;
                case 2:
                   todolist.viewtask();
                   break;
            
                case 3:{
                       int taskindex;
                      cout<<"enter the index of task to the mark as completed!";
                      cin>>taskindex;
                      todolist.marktask_is_completed(taskindex);
                      break;
            }
                case 4:{
                      int taskindex;
                      cout<<"enter the index of the task to remove!"<<endl;
                      cin>>taskindex;
                      break;
            }
                
                case 5:
                cout<<"exit(0)"<<endl;
                break;
                default:
                cout<<"you enter  invalid choice . please try again!"<<endl;
                break;

            }
           
        }  
         while(choice !=5);
return 0;
            
    }    
    