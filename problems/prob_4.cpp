#include <iostream>

using namespace std;


 void MergeArray(int arr1[], int arr2[], int output_arr[], int size_arr1, int size_arr2)
    {
        try
        {
            // Print array sizes (for debugging purposes)
            cout << "Size of first array: " << size_arr1 << endl;
            cout << "Size of second array: " << size_arr2 << endl;

            
            int *temp = new int[size_arr1 + size_arr2];

           
            int i = 0, j = 0, k = 0;

            // Merge elements from both arrays while elements remain in both
            while (i < size_arr1 && j < size_arr2)
            {
                if (arr1[i] < arr2[j])
                {
                    
                    temp[k++] = arr1[i++];
                }
                else
                {
                    
                    temp[k++] = arr2[j++];
                }
            }

            // If there are remaining elements in arr1
            while (i < size_arr1)
            {
                temp[k++] = arr1[i++];
            }

            // If there are remaining elements in arr2
            while (j < size_arr2)
            {
                temp[k++] = arr2[j++];
            }

            // Copy the merged elements from temp to the output array
            for (int i = 0; i < size_arr1 + size_arr2; ++i)
            {
                output_arr[i] = temp[i];
            }

            // Deallocate the temporary array to free memory
            delete[] temp;
        }
        catch (const bad_alloc &e)
        {
            // Handle memory allocation failure
            cerr << "Memory allocation failed: " << e.what() << endl;
            throw; // Rethrow the exception to indicate failure
        }
        catch (const exception &e)
        {
            // Handle other general exceptions
            cerr << "An error occurred: " << e.what() << endl;
            throw;
        }
    }

int main()
{
    // Test case 1: Normal arrays
    int arr1[] = {2, 4, 6, 8, 10};
    int arr2[] = {3, 5, 7};
    int output_arr[8];
    MergeArray(arr1, arr2, output_arr, 5 ,3);

    cout << "Merged Array (Test Case 1): ";
    for (int i = 0; i < 8; i++)
    {
        cout << output_arr[i] << " ";
    }
    cout << endl;

    // Test case 2: One empty array
    int arr3[] = {};
    int arr4[] = {1, 2, 3};
    int output_arr2[3];
    MergeArray(arr3,  arr4, output_arr2 , 0 , 3);

    cout << "Merged Array (Test Case 2): ";
    for (int i = 0; i < 3; i++)
    {
        cout << output_arr2[i] << " ";
    }
    cout << endl;

    // Test case 3: Both arrays empty
    int arr5[] = {};
    int arr6[] = {};
    int output_arr3[0];
    MergeArray(arr5,  arr6, output_arr3 , 0 , 0);

    cout << "Merged Array (Test Case 3): ";
    for (int i = 0; i < 0; i++)
    { // Output nothing
        cout << output_arr3[i] << " ";
    }
    cout << "(Empty Array)" << endl;

    return 0;
}