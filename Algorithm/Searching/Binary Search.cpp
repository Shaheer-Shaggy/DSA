#include <iostream>

#include "../Sorting/bubbleSort.cpp"

using namespace std;

int binarySearch(int arr[] , int low , int high , int x)
{
    while(low <= high){
      int mid = low + (high - low) / 2;

    if( arr[mid] == x )
       return mid ;


    if(arr[mid] < x)
       low = mid + 1;
    else 
       high = mid - 1;

    }

    return -1;
}



int main()
{
    int arr[] = {4 , 6, 2 , 8, 34, 65, 23, 87, 91 , 32 ,23  , 33 , 69, 62};
    int size  = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr , size);
    int result = binarySearch(arr, 0, size -1,  69);
    if (result == -1)
        cout << "Element is not present in array";
    else
        cout << "Element is present at index " << result;

    return 0;
}