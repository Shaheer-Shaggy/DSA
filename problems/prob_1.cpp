#include <iostream>
#include "../Stack/main.cpp"

using namespace std;

void BubbleSort(int arr[], int size)
{

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size; j++)
        {

            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void SortStack(Stack &stack)
{
    // Allocate memory for the array
    int *arr = new int[stack.getTop() + 1];
    int size = stack.getTop();

    // Pop elements from the stack and store them in the array
    for (int i = stack.getTop(); i >= 0; i--)
    {
        arr[i] = stack.pop();
        cout << arr[i] << "testing " << endl;
    }

    // Sort the array (you can use any sorting algorithm)
    cout << "size  :" << size << endl;
    BubbleSort(arr, size);

    // Push sorted elements back to the stack
    for (int i = 0; i <= size; i++)
    {
        stack.push(arr[i]);
        cout << "Final " << endl;
        cout << arr[i] << endl;
    }

    // Clean up: release the dynamically allocated memory
    delete[] arr;
}


void print(int arr[], int size)
{
    for(int i = 0 ; i < size ; i++)
    {
        cout << arr[i] << " " ;
    }
    cout << endl;
}
void bubbleSort(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    { for (int j = 0; j < size-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1] ;
                arr[j+1] = temp ;
                
            }
            
        }
        cout << arr[i] << " " << endl;
    }
}

void StackSort(Stack &stack)
{
    int size = stack.getTop()+1 ;
    cout << size << " " <<endl;
    int *arr = new int[size];

    for (int i = 0; i < size; i++)
    {
        arr[i] = stack.pop();
    }

    print(arr , size);
    cout << size  << " Testing " << endl;

    bubbleSort(arr , size);

    print(arr , size);

    for(int i = 0 ; i <size ; i++)
    {
        stack.push(arr[i]);
    }

   
}
int main()
{
    Stack stack1;
    stack1.push(3);
    stack1.push(8);
    stack1.push(23);
    stack1.push(56);
    stack1.push(12);
    stack1.push(6);

    // Print the elements before sorting
    cout << "Before sorting: ";
    stack1.display();
    cout << endl;

    StackSort(stack1);

    // Print the sorted elements
    cout << "After sorting: ";
    stack1.display();
    cout << endl;

    return 0;
}
