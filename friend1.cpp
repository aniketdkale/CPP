#include<iostream>
using namespace std;

class Hello
{
public:
    void fun();
    void gun();
};

class Demo
{
public:
    //Charcateristics
    int i;
private:
    int j;
protected:
    int k;
public:
    Demo()
    {
        i = 10; j = 20; k =30;
    }
    friend void Hello::fun(); 
    friend void Hello::gun();    
};
void Hello::gun()       // object orinted function
{
    Demo obj;
    cout<<obj.i<<endl;
    cout<<obj.j<<endl;  //Error
    cout<<obj.k<<endl;  //Error
}
void Hello::fun()       // object orinted function
{
    Demo obj;
    cout<<obj.i<<endl;
    cout<<obj.j<<endl;  //Error
    cout<<obj.k<<endl;  //Error
}

int main()
{
    Hello hobj;
    hobj.fun();
    hobj.gun();
    return 0;
}