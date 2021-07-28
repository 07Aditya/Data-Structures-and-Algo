#include <bits/stdc++.h>
using namespace std;

int main()
{
    //str num[6];
    int n,res=0,num;
    cin>>num;
    int x=1;


    while(num>0)
    {
        n=num%10;
        res=res+(n)*x;
        x=x*2;
        num=num/10;
    }
    cout<<res;
}
