#include<iostream>
using namespace std;

int main()
{
    int no = 11;
    int *p = &no;
    int *q = &no;

    int value = 21;
    int &x = value;
    int &y = value;

    cout<<value<<"\n";
    cout<<x<<"\n";

    cout<<&value<<"\n";
    cout<<&x<<"\n";
    return 0;
}
