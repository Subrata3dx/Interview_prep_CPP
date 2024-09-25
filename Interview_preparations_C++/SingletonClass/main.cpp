#include <iostream>
#include <thread>
#include <mutex>

using namespace std;

/*
class Singleton{

private:
    Singleton() //private constructor to avoid direct instantiation, like Singleton obj;
    {

    }

    Singleton(const Singleton&) = delete; //to avoid using copy constructor, like obj1 = obj2;
    Singleton& operator=(const Singleton&) = delete; //to avoid  using assignment operator


    static Singleton *p;
    static mutex mtx;
    static int test;

public:
    static Singleton* getInstance()
    {
        lock_guard<mutex> lock(mtx);
        if(p==nullptr)
        {
            std::this_thread::sleep_for(std::chrono::milliseconds(100));
            p = new Singleton();
        }
        return p;
    }

    void showMessage()
    {
        cout<<endl<<"This is a singleton instance";

        cout<<endl<<this;
    }

    ~Singleton()
    {
      // delete p;
        cout<<endl<<"Destructor is called";
    }

};

//Initializing static variables
Singleton* Singleton::p = nullptr;
mutex Singleton::mtx;
int Singleton::test = 10; //simply used this to show that using data type is necessary

void crateSingleton()
{

    Singleton* p = Singleton::getInstance();


    cout <<endl<< "Singleton instance address: " << p<<" ";

}



int main()
{
    thread t1(crateSingleton);

    thread t2(crateSingleton);



    //Singleton* s = Singleton::getInstance();
    //s->showMessage();
   // Singleton* x = Singleton::getInstance();
    //x->showMessage();
   // delete s;
    //delete x;
    t1.join();
    t2.join();
    return 0;
}

*/

class Singleton {
private:
    Singleton() {}

    Singleton(const Singleton&) = delete;
    Singleton& operator=(const Singleton&) = delete;

public:
    static Singleton* getInstance() {
        static Singleton instance;  // Initialized once, thread-safe in C++11 and later
        return &instance;
    }

    void showMessage() {
        std::cout << "This is a Singleton class instance!"<< std::endl;
    }
};

int main() {
    //Singleton* singleton1= Singleton::getInstance();
   // singleton1->showMessage();

    cout<< Singleton::getInstance();
    cout<<endl;
    cout<< Singleton::getInstance();
   // singleton2->showMessage();

    return 0;
}
