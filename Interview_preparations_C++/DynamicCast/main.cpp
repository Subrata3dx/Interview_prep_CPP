//Dynamic cast:
//=================================
#include<iostream>
using namespace std;
class Base
{
private:
	int num1;
	int num2;
public:
	Base( void )
	{
		this->num1 = 0;
		this->num2 = 0;
	}
	void setNum1( int num1 )
	{
		this->num1 = num1;
	}
	void setNum2( int num2 )
	{
		this->num2 = num2;
	}
	virtual void print( void )
	{
		cout<<"Num1	:	"<<this->num1<<endl;
		cout<<"Num2	:	"<<this->num2<<endl;
	}
};
class Derived : public Base
{
private:
	int num3;
public:
	Derived( void )
	{
		this->num3 = 0;
	}
	void setNum3( int num3 )
	{
		this->num3 = num3;
	}
	void print( void )
	{
		Base::print();
		cout<<"Num3	:	"<<this->num3<<endl;
	}
};
/*
int main4( void )
{
	try
	{
		Base b1;
		Base &b2 = b1;			// Use base class reference
		b2.setNum1(10);
		b2.setNum2(20);
		Derived &d1 = dynamic_cast<Derived&>( b1 ); //Downcasting
		d1.setNum3(30);
		d1.print();
	}
	catch( bad_cast &ex )
	{
		cout<<ex.what()<<endl;	//Output: std::bad_cast  ( For reference case)
	}
	return 0;
}
*/

int main( void )
{
	Base *ptrBase = new Base();				// Use base class pointer
	ptrBase->setNum1(10);
	ptrBase->setNum2(20);
	Derived *ptrDerived = dynamic_cast<Derived*>( ptrBase);
	if(ptrDerived != nullptr )
	{
		ptrDerived->setNum3(30);
		ptrDerived->print();
		delete ptrBase;
	}
	else
		cout<<"<NULL>"<<endl;			// Output: NULL ( For pointer case)
	return 0;
}


int main2(void)
{
	Base *ptrBase = nullptr;
	cout<<ptrBase<<endl;	//NULL
	Derived *ptrDerived = dynamic_cast<Derived*>( ptrBase);
	cout<<ptrDerived<<endl;	//Output: NULL //on successful casting it stores nullptr
	return 0;
}


int main1( void )
{
	Base *ptrBase = new Derived( );	//Upcasting
	ptrBase->setNum1(10);
	ptrBase->setNum2(20);
	Derived *ptrDerived = dynamic_cast<Derived*>(ptrBase);	//Downcasting
	ptrDerived->setNum3(30);
	ptrDerived->print();	//Derived::print;
	delete ptrBase;
	return 0;
}
