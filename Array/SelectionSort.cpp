#include <iostream>
#include <string>

using namespace std;

void SelectionSort(int arr[] , int size)
{
    
    for(int i = 0 ; i < size  ; i ++){
      int minIndex = i;
        for(int j = i+1 ; j < size ; j ++){
            if(arr[j] < arr[minIndex])  //comparing value of cuurent index value with all after that index  // find samllest value
              minIndex = j;  // index of smallest value
        }
        int temp = arr[i];   // swaping values 
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
            
}

void selectionSort(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        int minIndex = i;
        for(int j = i; j < size; j++)
        {
            if(arr[j] < arr[minIndex])
                minIndex = j;
        }
        if(minIndex !=i)
        {
         int temp = arr[i];
         arr[i]= arr[minIndex];
         arr[minIndex] = temp;
        }
    }
}


int main()
{

    int array[7] = {5, 6, 8, 4, 3, 9, 1};
    int size = sizeof(array) / sizeof(array[0]);
    selectionSort(array, size);

    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " " << endl;
    }

}