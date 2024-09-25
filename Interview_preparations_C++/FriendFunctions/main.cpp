#include <iostream>
//#include "testExtern.c"

using namespace std;

class Subrata;
class Suman
{

private:
    int age;
    string city;

  friend void accessBoth(Suman, Subrata);
public:

Suman()
{
    age = 36;
    city = "Bengaluru";
}
};

class Subrata
{

private:
    int age;
    string city;

  friend void accessBoth(Suman, Subrata);
public:

Subrata()
{
    age = 34;
    city = "Hyderabad";
}
};

void accessBoth(Suman s1, Subrata s2)
{

    cout<<s1.city<<endl;
    cout<<s2.city<<endl;
}

extern int var1;
/*
int main()
{
   /* Suman s1;
    Subrata s2;
    const int MAX = 5;
    int arr[MAX] = {1, 2 ,3,4, 5};
    int* p = arr;
    for(int i = 0; i< MAX; i++)
    {
        cout<<*p<<"  ";
        p++;
    }
    cout<<endl;
    accessBoth(s1, s2);
   cout<<endl<<var1;


   // Function pointer for a function taking two 'int' parameters and returning an 'int'
    int (*funcPtr)(int, int) = add;

    // Call the function 'add' using the function pointer 'funcPtr'
    int result = funcPtr(5, 3);
    cout << "The result of add(5, 3) is: " << result << endl;

    // Function pointer for a function taking one 'int' parameter and returning nothing
    void (*printPtr)(int) = print;
    printPtr(result); // Output: Value of X: 8

    // Function pointer for a function taking no parameters and returning nothing
    void (*greetPtr)() = greet;
    greetPtr(); // Output: Hello, World!

    // Using setX and getX functions
    void (*setXPtr)(int) = setX;
    int (*getXPtr)() = getX;

    setXPtr(10);
    cout << "The value of x after setX(10): " << getXPtr() << endl; // Output: 10

    // Demonstrating pass by value, reference, and pointer
    int num = 10;

    void (*passByValuePtr)(int) = passByValue;
    passByValuePtr(num); // Output: Inside passByValue: 20
    cout << "After passByValue, num: " << num << endl; // Output: 10

    void (*passByReferencePtr)(int&) = passByReference;
    passByReferencePtr(num); // Output: Inside passByReference: 30
    cout << "After passByReference, num: " << num << endl; // Output: 30

    void (*passByPointerPtr)(int*) = passByPointer;
    passByPointerPtr(&num); // Output: Inside passByPointer: 40
    cout << "After passByPointer, num: " << num << endl; // Output: 40
    return 0;
}
*/
