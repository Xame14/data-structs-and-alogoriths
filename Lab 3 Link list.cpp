#include <iostream>
#include <iomanip>
using namespace std;

void Print(int c, int p[], char l[], int li[]);

int main()
{
    int position[7];
    char list[7];
    int link[7];
    int headpointer = 0;
    
    position[0] = 0;
    list[0] = 'D';
    link[0] = 99;
    int counter = 1;
    Print(counter, position, list, link);
    
    position[1] = 1;
    list[1] = 'B';
    
    // B < D 
    // B should link to D
    
    link[1] = 0;
    counter++;
    Print(counter, position, list, link);
    
    position[2] = 2;
    list[2] = 'J';
    
    // J > D
    
    link[0] = 2;
    link[2] = 99;
    counter++;
    Print(counter, position, list, link);
    
    position[3] = 3;
    list[3] = 'M';
    
    // M > J 
    link[2] = 3;
    link[3] = 99;
    counter++;
    Print(counter, position, list, link);
    
    position[4] = 4;
    list[4] = 'F';
    
    // F < M 
    // F < J
    // F > D 
    
    link[0] = 4;
    link[4] = 2;
    counter++;
    Print(counter, position, list, link);
    
    position[5] = 5;
    list[5] = 'C'; 
    
    // C < M 
    // C < J
    // C < D 
    // C < F 
    // C > B 
    
    link[1] = 5;
    link[5] = 0;
    counter++;
    Print(counter, position, list, link);
    
    position[6] = 6;
    list[6] = 'W';
    
    // W > M 
    
    link[3] = 6;
    link[6] = 99;
    counter++;
    Print(counter, position, list, link);

    return 0;
}

void Print(int c, int p[], char l[], int li[] ){
    
    cout<<setfill('-')<<setw(20)<<' '<< setfill(' ')<<endl;
    cout<<"Position list link" << endl;
    for(int i = 0; i < c; i++){
        cout<<right<<setw(5)<< p[i] <<left<<setw(5) <<' '
            <<right<<setw(2)<< l[i] << left<<setw(4)<< ' '
            <<left<<setw(1)<< li[i] <<right<<setw(1)<< endl;
    }
    cout<<setfill('-')<<setw(20)<<' '<< setfill(' ')<<endl<<endl<<endl;
}
