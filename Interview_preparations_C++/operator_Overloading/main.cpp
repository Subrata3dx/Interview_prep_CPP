#include <iostream>

using namespace std;

//class Light; //class declaration
class Fan
{

private:
    int rpm, phase;
public:
    void First()
    {
        rpm = 3000;
        phase = 1;

    }

   void setFProp (int r, int p)
   {

       rpm = r;
       phase = p;
   }

    void getFProp()
    {

        cout<<"Fan RMP: " <<rpm;
        cout<<endl<<"Fan Phase: "<<phase;
    }

    friend ostream& operator <<(ostream&, Fan&); //we are using Light class only for printing
    friend istream& operator >>(istream&, Fan&);

};
/*
class Light
{
 private:
     int lumen,  watt;

 public:
    void setLProp()
    {

        cin>>lumen>>watt;


    }

    void getLProp()
    {

        cout<<"Light's brightness is: "<<lumen<<endl;
        cout<<"Light's watt: "<<watt<<endl;
    }

    friend ostream& operator << (ostream&, Light);

};

*/
ostream& operator <<(ostream& o, Fan &f)
{
    o<<"Fan RPM: "<<f.rpm<<endl;
    o<<"Fan Phase: "<<f.phase<<endl;
    return o;
}


istream& operator >>(istream& i, Fan &f)
{
    i>>f.rpm>>f.phase;
    return i;

}



int main()
{
//int rpm, ph;
Fan Fa;
cout<<"Enter Fan RPM and Phase: "<<endl;
//cin>>rpm>>ph;

//Fa.setFProp(rpm, ph);
//Fa.getFProp();
cin>>Fa;
cout<<Fa;


    return 0;
}
