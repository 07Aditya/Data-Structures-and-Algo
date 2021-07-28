#include<bits/stdc++.h>
using namespace std;

bool maxpair(int n,int a[],int k)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
           if(a[i]+a[j]==k)
           {
               cout<<i<<" "<<j<<endl;
               return true;
           }
        }
    }
    return false;
}

int main()
{
    int n;
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int k;
    cin>>k;

    cout<<maxpair(n,a,k);

}
