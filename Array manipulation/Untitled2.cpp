#include<bits/stdc++.h>
using namespace std;

int main()
{
     unsigned long long int n;
     unsigned long long int m;
     unsigned long long int c;
     unsigned long long int b;
     unsigned long long int k;
    cin>>n>>m;
     unsigned long long int mx=0;
     unsigned long long int a[n+1]={0};

    for(unsigned long long int i=1;i<=m;i++)
    {
        cin>>c>>b>>k;
        for(unsigned long long int j=c;j<=b;j++)
        {

            a[j]=a[j]+k;


        }
    }

     for(unsigned long long int i=1;i<=n;i++)
     {
         //cout<<a[i]<<" ";
         mx=max(mx,a[i]);

     }
    cout<<mx;

}
