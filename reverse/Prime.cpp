#include<iostream>
using namespace std;
int main()
{
    int num,rev=0,n;
    cin>>num;
    for(int i=0;i<num;i++)
    {
        n=num%10;
        rev=rev*10+n;
        num=num/10;
    }
    cout<<rev;
}
