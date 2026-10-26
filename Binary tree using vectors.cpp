#include <iostream>
#include <vector>
using namespace std;

void checker(vector<int>& position, vector<int>& leftptr, vector<int>& list, vector<int>& rightptr, int current, int item){

    if (list[item] < list[current])
    {
        if (leftptr[current] == -1)
            leftptr[current] = item;
        else
            checker(position, leftptr, list, rightptr,
                    leftptr[current], item);
    }
    else if (list[item] > list[current])
    {
        if (rightptr[current] == -1)
            rightptr[current] = item;
        else
            checker(position, leftptr, list, rightptr,
                    rightptr[current], item);
    }
}

int main()
{
    vector<int> position;
    vector<int> leftptr;
    vector<int> list;
    vector<int> rightptr;
    
    bool done = true;
    int number;
    int counter = 0;
    char choice;
    
    while(done){
        cout<<"Please enter a number for the list: ";
        cin>>number;
        if(cin.fail()){
            cin.clear();
            cin.ignore();
            cout<<"Would you like to STOP adding to the list 'y' or 'n': ";
            cin>>choice;
            if(choice == 'y'){
                done = false;
            }
            else
                continue;
        }
        else{                       // creates list
            position.push_back(counter);
            leftptr.push_back(-1);
            list.push_back(number);
            rightptr.push_back(-1);
            counter++;
        }
    }
    
    int yo = position.size();
    int hey = leftptr.size();
    int yello = list.size();
    int sup = rightptr.size();
    
    checker(position, leftptr, list, rightptr, 0);
    /*
    cout<<"position | leftptr | List | rightptr"<<endl;
    for(int k = 0; k < list.size(); k++){
        cout<<"  "<< position.at(k) <<"  |  "<< leftptr.at(k) <<"  |  "<< list.at(k) <<"  |  "<< rightptr.at(k) << endl;
    }
    */
    return 0;
}
