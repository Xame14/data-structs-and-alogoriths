#include <iostream>
using namespace std;

int main()
{
    stack<int> opstack;
    stack<char> intoken;
    stack<char> outToken;
    
    cout<<"Enter an expressionn: ";
    getline(cin, intoken);
    
    int i = 0; // nextIn
    int nextOut = 0;
    char tempvalue = '(';
    
    while(i < intoken.length)
        if(intoken[i] == ' '){
            continue
        }
        else if(intoken[i] == '(' ||intoken[i] == '-' ||intoken[i] == '+' ||intoken[i] == '*' ||intoken[i] == "/"){
            
            if(intoken[i] == ')'){
                backDownSTK();
            }
            
            else{
                processOP();
            }
            
            i++;
        }
        else{
            outToken.push(intoken.top());
            nextOut++;
        }
        i++
        

    return 0;
}
