#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    //int a[n];
    //for(int i=0;i<n;i++)
    {
        //cin>>a[i];
    }

    int prime[100]={0};

    for(int i=2;i<=n;i++)
    {
        if(prime[i]==0)
        {
        for(int j=i*i;j<=n;j+=i)
        {
            prime[j]=1;
        }
        }
    }
    for(int i=2;i<n;i++)
    {
        if(prime[i]==0 && n%i==0)
        {
            cout<<i<<" ";
        }
    }
}
