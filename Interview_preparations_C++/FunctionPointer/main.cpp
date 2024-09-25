#include<iostream>
using namespace std;

int sum( int num1, int num2 )
{
	return num1 + num2;
}

int sub( int num1, int num2 )
{
	return num1 - num2;
}

void accept_record( int &number )
{
	cout<<"Enter number	:	";
	cin>>number;
}

void print_record( const int &result )
{
	cout<<"Result	:	"<<result<<endl;
}

int menu_list( void )
{
	int choice;
	cout<<"0.Exit"<<endl;
	cout<<"1.Sum"<<endl;
	cout<<"2.Sub"<<endl;
	cout<<"Enter choice	:	";
	cin>>choice;
	return choice;
}
int main( void )
{
	int choice;
	while( ( choice = ::menu_list( ) ) != 0 )
	{
		int (*funcPtr)( int , int  ) = nullptr;		// Function pointer
		switch( choice )
		{
		case 1:
			// result = sum(num1,num2);
			funcPtr = sum;	// funcPtr is function pointer storing address of sum
			break;
		case 2:
			// result = sub(num1,num2);
			funcPtr = sub;  // funcPtr is function pointer storing address of sub
			break;
		}
		if( funcPtr != nullptr )
		{
			int num1, num2, result;
			::accept_record(num1);
			::accept_record(num2);
			result = funcPtr( num1, num2 );	// Polymorphism or Function pointer calling
			::print_record(result);
		}
	}
	return 0;
}
