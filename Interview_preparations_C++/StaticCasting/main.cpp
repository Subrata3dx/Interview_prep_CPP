
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
		this->num3 = 100;
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

	virtual void test(void)
	{
	    cout<<endl<<"Test call"<<endl;

	}
};

int main( void )
{
	Base *ptrBase = new Base();
	ptrBase->setNum1(10);
	ptrBase->setNum2(20);
	ptrBase->print();			// Base::print


	Derived *ptrDerived = static_cast<Derived*>(ptrBase);
	ptrDerived->setNum1(44);
	ptrDerived->setNum3(30);
	//ptrDerived->setNum1(4545);

    cout<<endl;
	ptrDerived->print();		// Derived::print
	return 0;
}
/*
int main2( void )
{
	Base *ptrBase = nullptr;
	cout<<ptrBase<<endl;	//NULL
	Derived ptrDerived = static_cast<Derived>( ptrBase);
	cout<<ptrDerived<<endl;	//NULL
	return 0;
}



int main1(void)
{
	Base *ptrBase = new Derived( );	//Upcasting
	ptrBase->setNum1(10);
	ptrBase->setNum2(20);

	ptrBase->print();
	//ptrBase->test();	//Base::print

	//Derived ptrDerived = (Derived)ptrBase;	//Downcasting
	Derived *ptrDerived = static_cast<Derived*>(ptrBase);	//Downcasting
	//Derived *ptrDerived = ptrBase;	//Downcasting
	ptrDerived->setNum3(30);
	ptrDerived->print();	//Derived::print;
	delete ptrBase;
	return 0;
}
*/
