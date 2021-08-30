#include<iostream>
using namespace std;


class Demo
{
public:
    //Charcateristics
    int x,y,z;          // non static characteristics
    static int no;      // static characteristics

    //Behavior
    void fun()          // non static behavior
    {
        cout<<"Inside non static fun";
    }
    static void gun()          // static behavior
    {
        cout<<"Inside satic gun";
    }
    Demo(int a = 10, int b = 20, int c = 30)
    {
        this->x = a;
        this->y = b;
        this->z = c;
    }

};
int Demo::no = 51;
int main()
{
    cout<<"Value of no :"<<Demo::no<<"\n";
    Demo::gun();
    Demo obj1(1,2,3);
    Demo obj2(10,20,30);
    obj1.fun();
    cout<<"Size of object is:"<<sizeof(obj1)<<"\n";

    return 0;
}