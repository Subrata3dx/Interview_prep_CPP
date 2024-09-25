
//[9:19 pm, 2/9/2024] Suman (Bidhan-da): Function pointer://

#include <iostream>
using namespace std;

// Function that adds two integers
int add(int a, int b) {
    return a + b;
}

// Function that takes one argument and returns nothing
void print(int x) {
    cout << "Value of X: " << x << endl;
}

// Function that takes no arguments and returns nothing
void greet() {
    cout << "Hello, World!" << endl;
}

// Get and Set functions for a variable 'x'
int x = 0; // Global variable

void setX(int value) {
    x = value;
}

int getX() {
    return x;
}

// Function that demonstrates pass by value
void passByValue(int a) {
    a = 20; // Only modifies local copy of 'a'
    cout << "Inside passByValue: " << a << endl;
}

// Function that demonstrates pass by reference
void passByReference(int& a) {
    a = 30; // Modifies the original 'a'
    cout << "Inside passByReference: " << a << endl;
}

// Function that demonstrates pass by pointer
void passByPointer(int* a) {
    *a = 40; // Modifies the value pointed to by 'a'
    cout << "Inside passByPointer: " << *a << endl;
}


int main() {
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

/*
==========================================================
[9:20 pm, 2/9/2024] Suman (Bidhan-da): Function pointer summery:
int sum(int a,int b){
	return a+b;
}
int (*FunPtr) (int,int) = sum;
int val = FunPtr(10,20);

=================================================
void printX(int a){
	cout<<"A: "<<a<<endl;
}
void (*FunPrint)(int) = printX;
FunPrint(10);

==================================================
int global = 99;
void display(){
	cout<<"Global: "<<global<<endl;
}
void (*FunDisplay)() = display;
FunDisplay();

===================================================
void passByPointer(int *ptr){
	*ptr = 10;
	cout<<"*ptr: "<<*ptr<<endl;
}
int num = 10;
void (*FunPassByPointer )(int*) = passByPointer;
FunPassByPointer(*num);

===================================================
void passByValue(int val){
	cout<<"Val: "<<val<<endl;
}
int num = 10;
void (*FunpassByValue )(int) = passByValue;
FunpassByValue(num);

===================================================
void passByReference(int &ptr){
	ptr = 10;
	cout<<"&ptr: "<<ptr<<endl;
}
int num = 10;
void (*FunPassByReference)(int&) = passByReference;
FunPassByReference(&num);
====================================================
*/
