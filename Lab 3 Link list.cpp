#include <iostream>
using namespace std;





int main()
{
    int position[7];
    
    char list[7];
    
    int link[7];
    
    int headpointer = 0;
    
    position[0] = 0;
    list[0] = 'D';
    link[0] = 99;
    
    position[1] = 1;
    list[1] = 'B';
    
    // B < D 
    // B should link to D
    
    link[1] = 0;
    
    position[2] = 2;
    list[2] = 'J';
    
    // J > D
    
    link[0] = 2;
    link[2] = 99;
    
    position[3] = 3;
    list[3] = 'M';
    
    // M > J 
    link[2] = 3;
    link[3] = 99;
    
    position[4] = 4;
    list[4] = 'F';
    
    // F < M 
    // F < J
    // F > D 
    
    link[0] = 4;
    link[4] = 2;
    
    position[5] = 5;
    list[5] = 'C'; 
    
    // C < M 
    // C < J
    // C < D 
    // C < F 
    // C > B 
    
    link[1] = 5;
    link[5] = 0;
    
    position[6] = 6;
    list[6] = 'W';
    
    // W > M 
    
    link[3] = 6;
    link[6] = 99;
    
    for(int i = 0; i < 7; i++){
        cout<<position[i] << "    " << list[i] << "    "<< link[i] << endl;
    }
    
    
    

    return 0;
