#include<iostream>
using namespace std;

class Demo
{
private:
    int no1;
    int no2;
public:
    Demo()
    {
        cout<<"Default constructor\n";
        no1 = 0;
        no2 = 0;
    }
    Demo(int x, int y)
    {
        cout<<"Parametrised constructor\n";
        no1 = 10;
        no2 = 20;        
    }
    Demo(Demo &ref)
    {
        cout<<"Copy constructor\n";
        no1 = ref.no1;
        no2 = ref.no2;
    }
    ~Demo()
    {
        cout<<"Destuctor\n"
    }
};
int main()
{
    Demo obj1;
    Demo obj2(10,20);
    Demo obj3(obj2);
    return 0;
}