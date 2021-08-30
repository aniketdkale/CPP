#include<iostream>
using namespace std;

class Demo
{
public:
    int i;
    int j;        //Constant characteristics

    Demo()
    {
        cout<<"Default\n";
        i = 0;
    }
    Demo(int x, int y)
    {
        cout<<"Parametrised\n";
        i = x;
    }
};

int main()
{
    Demo obj1;
    //obj1.j++;  Error
    const Demo obj2(11,21);

    //obj2.i++;  Error
    obj1.i++;

    return 0;
}