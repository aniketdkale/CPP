#include<iostream>
using namespace std;

class Demo
{
public:
    int i;
    const int j;        //Constant characteristics

    Demo() : j(0)       //Member initiallisation list
    {
        cout<<"Default\n";
        i = 0;
    }
    Demo(int x, int y) : j(y)
    {
        cout<<"Parametrised\n";
        i = x;
    }
};

int main()
{
    Demo obj1;
    //obj1.j++   Error
    Demo obj2(11,21);

    return 0;
}