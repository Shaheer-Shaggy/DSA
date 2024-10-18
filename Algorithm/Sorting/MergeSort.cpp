#include <iostream>
#include <vector>

using namespace std;
void merge(int left[], int leftSize, int right[], int rightSize, int arr[]);
void mergeSort(int arr[] , int lenght)
{
    if (lenght <= 1)
        return;

    int mid = lenght / 2;

    int *leftArray = new int[mid];
    int *rightArray = new int[lenght - mid];

    int i = 0;
    int j = 0;

    for (; i < lenght; i++)
    {
        if (i < mid)
        {
            leftArray[i] = arr[i];
        }
        else
        {
            rightArray[j] = arr[i];
            j++;
        }
    }
    mergeSort(leftArray , mid);
    mergeSort(rightArray , (lenght -mid));
    merge(leftArray, mid , rightArray , (lenght -mid), arr);
}

void merge(int left[], int leftSize, int right[], int rightSize  ,int arr[])
{
    

    int i = 0 , l = 0 , r = 0 ;

    while(l <leftSize && r < rightSize)
    {
        if(left[l] < right[r])
        {
            arr[i++] = left[l++];
        }
        else {
            arr[i++] = right[r++];
        }
    }
    while(l< leftSize )
    {
        arr[i++] = left[l++];
    }
    while (r < rightSize)
    {
        arr[i++] = right[r++];
    }
    
}


int main()
{

    int arr[] ={6,2,17,12,2,53 ,4 ,9};
    int lenght = sizeof(arr) / sizeof(arr[0]);

    mergeSort(arr , lenght);

    for(int i = 0 ; i < 8 ; i++) {
        cout << arr[i] << " ";
    }
    return 0 ;
}