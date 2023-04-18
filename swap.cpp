#include<iostream>
using namespace std;
int main()
{
    int x=2;
    int y=4;
    int temp;
    temp=x;
    x=y;
    y=temp;
    cout<<"Swapping number is x = "<<x<<" y = "<<y<<endl;
}