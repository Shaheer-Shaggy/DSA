#include <iostream>
#include "../Stack/temp_stack.h"

using namespace std ;

bool BracketBalance(string str)
{
    Stack<char> temp ;
    
    for(int i = 0 ; i < str.length() ; i++)
    {
        if(temp.isEmpty())
        {
            temp.push(str[i]);
        }
        else if( (temp.Top() == '(' && str[i] == ')') || (temp.Top() == '{' && str[i] == '}' ) || (temp.Top() == '[' && str[i] == ']'))
        {
            temp.pop();
        }
        else{
            temp.push(str[i]);
        }
    }
    if(temp.isEmpty())
    {
        return true;
    }
    return false;

}

int main()
{

}