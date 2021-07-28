#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    int n;
    int x=1,num,res=0;
    cin>>n;

    while(x<=n)
    {
        x*=2;
    }
    x/=2;
    cout<<x<<endl;
    while(x>0)
    {
        num=n/x;
        n-=num*x;
        x/=2;
        res=res*10+num;

    }
    cout<<res;
}
