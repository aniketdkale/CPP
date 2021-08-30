#include <iostream>
using namespace std;

class Demo
{
public:
    int iNo1;
    int iNo2;
    Demo(int i = 0, int j = 0)
    {
        iNo1 = i;
        iNo2 = j; 
    }
    void Display(int x)
    {
        cout<<"Value of no1 is:"<<iNo1"\n";
         cout<<"Value of no2 is:"<<iNo2"\n";
         cout<<"Value of x is:"<<x"\n";
    }
};

int main()
{
    float fValue1 = 0.0, fValue2 =0.0, fRet = 0.0;
    cout<<"Enter redious\n";
    cin>>fValue1;

    cout<<"Enter the value of PI\n";
    cin>>fValue2;

    Demo obj;

    fRet = obj.Area(fValue1,fValue2);
    cout<<"Area of Circle is:"<<fRet<<"\n";

    fRet = obj.Area(fValue1);  //obj.Area(10.5)
    cout<<"Area of Circle is:"<<fRet<<"\n";    
    return 0; 
}