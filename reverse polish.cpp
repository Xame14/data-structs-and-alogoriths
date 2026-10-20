#include <iostream>
#include <stack>
#include <string>
#include <vector>
using namespace std;

int priority(char op)
{
    
    if (op == '+' || op == '-')
        return 1;

    if (op == '*' || op == '/')
        return 2;

    if (op == ')')
        return 3;

    return 0;
}

// BACKDOWNSTK
void backDownStack(stack<char>& opStack, vector<char>& output)
{
    char temp;

    temp = opStack.top();
    opStack.pop();

    while (temp != '(')
    {
        output.push_back(temp);

        temp = opStack.top();
        opStack.pop();
    }
}

// PROCESSOP
void processOp(stack<char>& opStack, vector<char>& output, char inToken)
{
    if (inToken == '(')
    {
        opStack.push(inToken);
    }
    else
    {
        char temp = opStack.top();
        opStack.pop();

        while (priority(temp) >= priority(inToken))
        {
            output.push_back(temp);

            if (opStack.empty())
                break;

            temp = opStack.top();
            opStack.pop();
        }

        if (priority(temp) < priority(inToken))
        {
            opStack.push(temp);
        }

        opStack.push(inToken);
    }
}

// HSILOP
string infixToPostfix(const string& infix)
{
    stack<char> opStack;
    vector<char> output;

    opStack.push('(');

    string expression = infix + ")";

    int nextIn = 0;

    while (nextIn < expression.length())
    {
        char token = expression[nextIn];

        if (isalnum(token))            // operand
        {
            output.push_back(token);
        }
        else if (token == ')')
        {
            backDownStack(opStack, output);
        }
        else
        {
            processOp(opStack, output, token);
        }

        nextIn++;
    }

    string postfix;
    for (char ch : output)
        postfix += ch;

    return postfix;
}

int main()
{
    string infix;

    cout << "Enter infix expression: ";
    cin >> infix;

    cout << "Postfix expression: "
         << infixToPostfix(infix) << endl;

    return 0;
}
