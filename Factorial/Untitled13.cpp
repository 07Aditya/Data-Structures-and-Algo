#include<iostream>
using namespace std;

int main()
{
    int num;
    cin>>num;

    for(int i=num-1;i>1;i--)
    {
        num=num*i;
    }
    cout<<num;
}
