#include<iostream>
using namespace std;


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
    friend void fun();   
};

void fun()
{
    Demo obj;
    cout<<obj.i<<endl;
    cout<<obj.j<<endl;  //Error
    cout<<obj.k<<endl;  //Error
}
int main()
{
    fun();
    return 0;
}