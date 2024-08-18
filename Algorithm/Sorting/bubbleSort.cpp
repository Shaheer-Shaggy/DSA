#include <iostream>
#include <string>

using namespace std;

void bubbleSort(int arr[], int size)
{
    int temp;
    for(int i =0 ; i < size-1 ; i++){    // here size -1  // we used size -1 cuz the last element is always the largest after the sort on [size-1] element of an array 
        for(int j = 0 ; j < size-i-1 ; j++){   // size - i -1 to reduce time complexity
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;

            }
    }
}
}

void bubblesort(int arr[], int size)
{
    int temp;
    for (int i = 0; i < size  ; i++)
    { 
        for(int j= 0; j< size -i ; j++)
        {
           if(arr[j] >arr[j+1])
           {
               temp = arr[j];
               arr[j] = arr[j + 1];
               arr[j + 1] = temp;
           }
        }
      
    }
}

// int main() 
// {
//     int array[7] = {5,6,8,5,3,9,1};


//     int size = sizeof(array)/sizeof(array[0]);
//     bubbleSort(array, size);

//     for (int i = 0; i < size; i++)
//     {
//         cout << array[i] << " " << endl;
//     }

//     return 0;
// }

