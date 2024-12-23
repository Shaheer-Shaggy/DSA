#include <iostream>
#include <string>

using namespace std;

int myFunction(int a)
{
    int tex = a%2;
    
    if(tex == 0 ) 
       return 0;
    else
    return -1;
}

void sumOfEven(int start , int end)
{
    int sum  =0 ;
    for(int i = 0; i < 3; i++)
    {

        
        if(myFunction(start) == 0)
            sum = sum + start;
        
        start ++;
    }
}

int main()
{
    int start =0 ; 
    int end  = 0;

    cout << "enter the starting limit " <<endl;
    cin >> start;
    cout << "Enter the ending limit " <<endl;
    cin >> end;


    for(int i = start; i < end; i++)
    {
        if( i%2 == 0 && (i < 100) )
        {
            cout << "Even"<<endl;

        }
        else{
            cout << "Odd" << endl;
            
        }
    }
    return 0;
}