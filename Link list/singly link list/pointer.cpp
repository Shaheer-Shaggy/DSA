#include <iostream>

using namespace std;

void modifyPointer(int *ptr)
{
    *ptr = 10; // Modifies the value at the address pointed to by ptr
    cout << "ptr: " << ptr << endl;
    cout << "Modified value at ptr: " << *ptr << endl;
}

void modifyPointerToPointer(int **ptr)
{
    cout << endl;
    cout << "ptr: " << ptr << endl;
    cout << "ptr: " << *ptr << endl;
    cout << "Address of ptr: " << &ptr << endl;

    *ptr = new int(20); // Modifies the pointer itself
    cout << "ptr: " << ptr << endl;
    cout << "Modified value at ptr: " << *ptr << endl;
   
}

int main()
{
    int *p = new int(5);
    cout << "Initial value at p: " << *p << endl;
    cout << "Address of p: " << p << endl;
    modifyPointer(p);           // Changes the value at p to 10
    cout << "value at p after 1st program : " << *p << endl;
    cout << "Address of p after deallocation: " << p << endl; // Should print nullptr
   
    modifyPointerToPointer(&p); // Changes p to point to a new address with value 20
    return 0;
}

// int main()
// {
//     int x = 5;
//     int* ptr = &x;

//     cout << "Value of x: " << x << endl;
//     cout << "Address of x: " << &x << endl;
//     cout << "Value of ptr: " << ptr << endl;
//     cout << "Dereferenced value of ptr: " << *ptr << endl;

//     cout << endl;

//     int ** dptr = &ptr;

//     cout << "Value of dptr: " << dptr << endl;
//     cout << "Dereferenced value of dptr (address of x): " << *dptr << endl;
//     cout << "Dereferenced value of *dptr (value of x): " << **dptr << endl;
// }