#include <iostream>
#include <string>
using namespace std;

void ListMaker(string n);

template <typename T>
class LinkedList
{
private:
    int position[8];
    T list[8];
    int link[8];

    int first;
    int count;

public:
    LinkedList()
    {
        first = -1;
        count = 0;

        for (int i = 0; i < 8; i++)
        {
            position[i] = i;
            link[i] = -1;
        }
    }

    void insert(T item)
    {
        list[count] = item;
        link[count] = -1;

        // First item
        if (first == -1)
        {
            first = count;
        }
        // Insert before the first item
        else if (item < list[first])
        {
            link[count] = first;
            first = count;
        }
        else
        {
            // Find the correct position
            int current = first;
            // Link -
            while (link[current] != -1 &&
                   list[current] < item)
            {
                current = link[current];
            }

            // Insert the new item
            link[count] = link[current];
            link[current] = count;
        }

        count++;

        printTable();
    }

    void printTable()
    {
        cout << "\nPosition\tList\t\tLink\n";
        cout << "---------------------------------\n";

        for (int i = 0; i < count; i++)
        {
            cout << position[i] << "\t\t"
                 << list[i] << "\t\t"
                 << link[i] << endl;
        }

        cout << "Head = " << first << endl;

    }
};

int main()
{
    bool leave = 0;
    string choice;
    
    while(leave == 0 ){
        cout<<"what list do you want to make? (int, float, String Character): ";
        
        cin>>choice;
        
        ListMaker(choice);
    }
    /*LinkedList<string> myList;

    string item;

    cout << "Enter 8 items:\n";

    for (int i = 0; i < 8; i++)
    {
        cout << "Enter item " << i + 1 << ": ";
        cin >> item;

        myList.insert(item);
    } */

    return 0;
}

void ListMaker(string n){
    if(n == "int"){
        LinkedList<int> myList;
        int item;
        
        cout << "Enter 8 items:\n";
        
        for (int i = 0; i < 8; i++)
        {
           cout << "Enter item " << i + 1 << ": ";
            cin >> item;
           
            myList.insert(item);
        }
    }
    else if(n == "float"){
        LinkedList<float> myList;
        float item;
        
        cout << "Enter 8 items:\n";
        
        for (int i = 0; i < 8; i++)
        {
           cout << "Enter item " << i + 1 << ": ";
            cin >> item;
           
            myList.insert(item);
        }
    }
    
    else if(n == "character"){
        LinkedList<char> myList;
        char item;
        
        cout << "Enter 8 items:\n";
        
        for (in t i = 0; i < 8; i++)
        {
           cout << "Enter item " << i + 1 << ": ";
            cin >> item;
           
            myList.insert(item);
        }
    }
    
    else if(n == "String"){
        LinkedList<string> myList;
        string item;
        
        cout << "Enter 8 items:\n";
        
        for (int i = 0; i < 8; i++)
        {
           cout << "Enter item " << i + 1 << ": ";
            cin >> item;
           
            myList.insert(item);
        }
    }
        
    else{
        cout<<"Not a valid input";
        return;
    }
    return;
}
