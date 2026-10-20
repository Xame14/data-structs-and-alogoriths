#include <iostream>
using namespace std;

int main()
{
    vector<int> position;
    vector<int> leftptr;
    vector<int> list;
    vector<int> rightptr;
    
    bool done = true;
    int number;
    int counter = 0
    char choice;
    
    while(!done){
        cout<<"Please enter a number for the list: ";
        cin>>number;
        if(cin.fail()){
            cout<<"Would you like to STOP adding to the list 'y' or 'n': ";
            cin>>choice;
            if(choice == 'y'){
                done = false;
            }
            else
                continue;
        }
        else{
            position.push(counter);
            leftptr.push(-1);
            list.push(number);
            rightptr.push(-1);
            counter++
        }
    }
    
    int temp = 0;
    for(int i = 1; i < list.size(); i++){
        if(list.at(i) < list.at(temp)){
            if(list.at(temp) == -1){
                leftptr.at(temp) = position.at(i)
            }
        }
        else if(list.at(i) > list.at(temp)){
            if(list.at(temp) == -1){
                rightptr.at(temp) = position.at(i);
            }
            else{
                if()
            }
        }
    }

    return 0;
}
