#include<iostream>     //input output stream

using namespace std;   // standerd namespace

class Demo   // classdeclaretion
{
public:   // access specifier
    //characteristics
    int ino1;       //4 bytes
    int ino2;       //4 bytes
    //Behaviour
    Demo()  //constructor
    {
        cout<<"Inside constructor\n";
        ino1 = 0;       //intialisation
        ino2 = 0;       //intialisation
    
    }
    ~Demo() //Destructor
    {
        cout<<"Inside destructor\n";
    }
    void fun()  //Behaviour
    {
        cout<<"Inside fun\n";
    }
    void gun()      //Behaviour
    {
        cout<<"Inside gun\n";
    }
};

int main()
{
    cout<<"Inside main\n";

    Demo obj1;      //object creation
    Demo obj2;      //object creation
    obj1.fun();
    obj2.gun();

    return 0;
}