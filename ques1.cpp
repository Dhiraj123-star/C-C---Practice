#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int x=10;
    int y=70;
    x=x+y;
    y=x-y;
    x=x-y;

    cout<<"X: "<<x<<endl;
    cout<<"Y: "<<y<<endl;
    return 0;
}
