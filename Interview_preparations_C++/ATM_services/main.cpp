#include <iostream>
#include <unordered_map>
#include <limits> //for clearing input buffer
#include <conio.h>  // for getch()
#include <fstream>

using namespace std;

class ATM
{
private:

    unordered_map<string, int> cards; //for storing card number ans PIN
    double balance = 0;

    struct Account
    {
        //char name[50];
        string name;
        int account;
        double balance;
        int PIN;
    }ax;



public:

//constructors
ATM()
{
   //storing a few card details in the unordered-map cards
   // cards["111111"] = 1111;
   // cards["222222"] = 2222;
    //cards["333333"] = 3333;

    //balance = 500000; //giving an arbitrary value

}
void createAccount(string name, int accNo, double bal, int pin)
{
    ofstream outFile(to_string(accNo) + ".dat");
    if (!outFile)
    {
        cout << "Error opening file for writing!" << endl;
    }

    else
    {
    Account a1 = {name, accNo, bal, pin};
    outFile << a1.name << " " << a1.account << " " << a1.balance << " "<<a1.PIN<< endl;
    }

    outFile.close();
}

//for verifying correct PIN
bool checkCard(int cardNo, int pin)
{

    ifstream inFile(to_string(cardNo)+".dat");
    if (!inFile) {
        cout << "Error opening file for reading!" << endl;

    }

    Account temp;
    while (inFile >> temp.name >> temp.account >> temp.balance >> temp.PIN)
    {

        if(temp.account == cardNo && temp.PIN == pin)
        {
            cout<<"----------------------------------------------------------"<<endl;
            cout << "Hi " << temp.name <<"!"<< endl;
            ax=temp;

            inFile.close();
            return true;

        }

    }

    cout<<"Make sure you are entering correct PIN number."<<endl;

    return false;
}

//update balance after withdrawal

void update(int cardNo)
{
  ofstream outFile(to_string(cardNo)+".dat");
    if (!outFile) {
        cout << "Error opening file for writing!" << endl;

    }


    outFile << ax.name << " " << ax.account << " " << ax.balance << " "<<ax.PIN<< endl;

}



/*
//for verifying correct PIN
 bool checkCard(int cardNo, int pin)
{


    string cs = to_string(cardNo);
    if(cards.find(cs)!=cards.end())
       {
           if(cards[cs]==pin)
           return true;
       }
    cout<<"Make sure you are entering correct PIN number."<<endl;
    return false;


}
*/


//to check balance
double checkBal()
{
    Account *a = &ax;
  return a->balance;
}

//to withdrawal amount. This function checks for sufficient amount and whether the entered amount is multiple of 100s.
void withdrawal()
{
    int amt;
    while(true)
    {
        cout<<"Enter the amount to be withdrawn: ";
        cin>>amt;

        if(amt>ax.balance)
        {
            cout<<"Your account does not have sufficient balance."<<endl;
            break;
        }

        else if(amt<=0)
            cout<<"Enter an amount that more than 0 and multiple of 100."<<endl;

        else if(amt%100!=0)
        {
            cout<<"Please enter an amount that is multiple of 100."<<endl;
        }

        else
        {
            ax.balance = ax.balance - amt;
            update(ax.account);
            cout<<endl<<"Please collect the cash..."<<endl;
            break;
        }

    }
}

//for masking ATM PIN

int maskInput(void)
{
    string input;
    char ch;
    while ((ch = _getch()) != '\r') // Loop until Enter is pressed
    {
        if (ch == '\b' && !input.empty())
        { // Handle backspace
            std::cout << "\b \b";
            input.pop_back();
        }

        else if (ch != '\b')
        {
            std::cout << '*'; // Display '*' for each character
            input.push_back(ch);
        }
    }
    return stoi(input);
}


//PIN changing function
bool changePIN(int cardNo)
{
int existingPIN;
int newPIN1, newPIN2;
cout<<"Enter the existing PIN: ";
existingPIN = maskInput(); //masks the input and returns the input
if(ax.PIN==existingPIN)
{
    int wrongCount = 3; //for checking how many times non-matching PIN is being entered.
    while(wrongCount>0)
    {
        cout<<endl<<"Enter a new PIN: ";
        newPIN1 = maskInput();
        if(ax.PIN==newPIN1)
            cout<<endl<<"You have entered the existing PIN. Please enter a new PIN."<<endl;
        else
        {
            cout<<endl<<"TO confirm enter the new PIN again: ";
            newPIN2 = maskInput();
            if(newPIN1==newPIN2)
            {
                ax.PIN=newPIN1;
                cout<<endl<<"Congratulations you ATM PIN number is changed."<<endl;
                update(ax.account);
                break;
            }

            else
            {
                wrongCount--;
                if(wrongCount==0) //this feature is not complete for blocking a card for 24 hours
                {
                    cout<<endl<<"PIN numbers are not matching, try again. You have exhausted all your chance(s), your ATM card is blocked for 24 hours."<<endl;
                    return false;
                }

                cout<<endl<<"PIN numbers are not matching, try again. You have "<<wrongCount<<" chance(s), after which your ATM card will be blocked."<<endl;

            }
        }
    }
}

else
{
    cout<<endl<<"The existing PIN is not matching. Please enter the correct PIN."<<endl;
}

return true;

}

}; //end of class


int main()
{
    ATM a1; //creating an object
   // a1.createAccount("Hari", 111111, 800000, 1111);
    //a1.createAccount("Madhab", 222222, 900000, 2222);
    //a1.createAccount("Krishna", 333333, 700000, 3333);
   // a1.readFIle();

    cout << "ICICI bank ATM welcomes you!" << endl;
    cout << "Insert your ATM card." << endl;
    int cardNo;
    cin>>cardNo;
    int pin;
    cout << "Enter your four digit ATM PIN:";
    pin = a1.maskInput();
    cout<<endl;


    if(a1.checkCard(cardNo, pin)) //to verify the entered PIN number against the ATM card, PIN matches with the ATM card number it shows the banking options
    {
        short count =0;

        while(1)
        {
        cout<<endl;
        //cout<<"----------------------------------------------------------"<<endl;
        cout<<"Enter the service you need"<<endl;
        cout<<". For balance check, enter: 1"<<endl;
        cout<<". For withdrawal, enter: 2"<<endl;
        cout<<". For ATM PIN change, enter: 3"<<endl;
        cout<<". To quit, enter: 4"<<endl;
        cout<<endl<<"Enter your option: ";
        int opt;
        cin>>opt;
        cout<<endl;
        bool flag1  = true; //for exiting the application when entered PIN is not matching while changing the PIN

        switch(opt)
        {
        case 1:
            cout<<"You account balance is:" <<a1.checkBal()<<endl;
            break;
        case 2:
            a1.withdrawal();
            break;
        case 3:
            flag1 = a1.changePIN(cardNo);
            break;
        case 4:
            cout<<"Thanks for banking with us!"<<endl;
            break;

        default:


            /*if (cin.fail()) //handles incorrect input other than above mentioned 4 cases
            {
            cin.clear(); // Clear the error state
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Discard invalid input
            cout << "Invalid input. Please enter a valid option." << endl;
            continue; // Ask for input again
            }
            */



           count++;
            if(count<3) //we are giving 3 chances here after which user has to restart the process by inserting the ATM
            {
            cin.clear(); // Clear the error state
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Discard invalid input
            cout<<"Please enter a correct option."<<endl;
            continue;
            }

            else
            {
                flag1=0;
                cout<<"Your inputs are not correct, please reinsert your ATM card and try again."<<endl;
                break;
            }

        }

        if(opt==4||flag1==0) //to exit loop
            break;
        }
    }


    return 0;
}
