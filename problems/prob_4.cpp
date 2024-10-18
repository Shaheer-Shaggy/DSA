#include <iostream>

using namespace std;

void MergeArray(int arr1[] , int arr2[] , int output_arr[])
{
    //int n = sizeof(arr1) / sizeof(arr1[0]);
   // int m = sizeof(arr2) / sizeof(arr2[0]);

   int n =5 ;
   int m = 3 ;

    cout << n << " " << endl;
    cout << m << " " << endl;

    int *temp = new int[n+m];

    int i = 0, j = 0, k = 0;

    while(i < n  && j < m) 
    {
        if(arr1[i]  < arr2[j])
        {
            temp[k] = arr1[i];
            i++;
            k++;
        }
        else 
        {
            temp[k] = arr2[j];
            j++;
            k++;
        }
    } 

    while(i <n)
    {
        temp[k] = arr1[i];
        i++;
        k++;
    }
    while(j < m)
    {
        temp[k] = arr2[j];
        j++;
        k++;
    }

    for (int i = 0; i < n + m; ++i)
    {
        output_arr[i] = temp[i];
    }

    
    delete[] temp;


}

int main()
{
    int arr1[5] ={2 ,4 ,6,8,10};
    int arr2[3]= {3 , 5, 7};
    int output_arr[8];

    MergeArray(arr1, arr2, output_arr);

    for(int i = 0; i < 8; i++)
    {
        cout << output_arr[i] << " ";
    }
}