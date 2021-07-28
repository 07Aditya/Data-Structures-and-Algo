#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n,res=0,num;
    cin>>num;
    int x=1;


    while(num>0)
    {
        n=num%10;
        res=res+(n)*x;
        x=x*8;
        num=num/10;
    }
    cout<<res;
}
