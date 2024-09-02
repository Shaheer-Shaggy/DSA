#include <iostream>
#include "../Stack/main.cpp"


using namespace std;

void BubbleSort(int arr[] , int size)
{
    
    for(int i = 0 ; i < size-1 ; i++)
    {   
        for(int j = 0 ; j < size ; j++)
        {
              
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                
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
    {    arr[i] = stack.pop();
         cout << arr[i] << "testing " <<endl;
    }
   

    // Sort the array (you can use any sorting algorithm)
   cout << "size  :" << size << endl;
   BubbleSort(arr, size);

  
  
   // Push sorted elements back to the stack
   for (int i = 0; i <= size; i++)
    {   stack.push(arr[i]);
    cout << "Final " <<endl;
    cout << arr[i] << endl;
    }

   // Clean up: release the dynamically allocated memory
   delete[] arr;
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

    SortStack(stack1);

    // Print the sorted elements
    cout << "After sorting: ";
    stack1.display();
    cout << endl;

    return 0;
}
