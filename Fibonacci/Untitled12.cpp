#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a=-1,b=1,c;


    for(int i=0;i<20;i++)
    {
        cout<<a+b<<" ";
        c=a+b;
        a=b;
        b=c;


    }
}
