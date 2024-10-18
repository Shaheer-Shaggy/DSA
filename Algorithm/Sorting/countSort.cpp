#include <iostream>
using namespace std;

void CountSort(int arr[], int output[], int size)
{
    int N = size;

    // Find the maximum element in the input array
    int M = 0;
    for (int i = 0; i < N; i++)
        M = max(M, arr[i]);

    cout << "Value of M: " << M << endl;

    // Allocate and initialize the count array
    int *countArr = new int[M + 1]{0};

    // Print the initialized count array
    for (int i = 0; i <= M; i++)
    {
        cout << countArr[i] << " ";
    }
    cout << "\nOut of test : " << endl;

    // Store the frequency of each element
    for (int i = 0; i < N; i++)
    {
        countArr[arr[i]]++;
        cout << "countArr[" << arr[i] << "] = " << countArr[arr[i]] << endl;
    }

    cout << "Out of test2 : " << endl;

    // Compute the prefix sums
    for (int i = 1; i <= M; i++)
    {
        countArr[i] += countArr[i - 1];
        cout << "countArr[" << i << "] = " << countArr[i] << endl;
    }

    cout << "Out of test3 : " << endl;

    // Build the output array
    for (int i = N - 1; i >= 0; i--)
    {
        output[countArr[arr[i]] - 1] = arr[i];
        countArr[arr[i]]--;
        cout << "output[" << countArr[arr[i]] << "] = " << arr[i] << endl;
    }

    // Print the sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < N; i++)
    {
        cout << output[i] << " ";
    }
    cout << endl;

    // Clean up allocated memory
    delete[] countArr;
}

int main()
{
    int arr[] = {5, 6, 7, 2 , 5 ,9 ,5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int *output = new int[size];

    // Call CountSort function
    CountSort(arr, output, size);

    // Clean up allocated memory
    delete[] output;

    return 0;
}
