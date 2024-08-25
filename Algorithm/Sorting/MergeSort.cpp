#include <iostream>
#include <vector>

using namespace std; 

void merge(vector<int>& arr, int left , int mid , int right )
{

    int n1 = mid - left +1 ; 
    int n2 = right - mid ; 


    vector<int> L(n1) , R(n2) ;

    for( int i = 0 ; i < n1 ; i++)
        L[i] = arr[left + i] ;
    for( int j = 0 ; j < n2 ; j++)
        R[j] = arr[mid + 1 + j] ;

        int i = 0 , j = 0  ;
        int k = left ;

}

int main()
{

    
    
    
    

    return 0 ;
}