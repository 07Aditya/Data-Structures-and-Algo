#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i =0;i<n;i++)
    {
        cin>>a[i];
    }
    int c=-1;
    int ans=0;
    for(int i =0;i<n;i++)
    {
        if(a[i]>a[i+1]&&a[i]>c)
        {
           ans++;

        }

        c=max(a[i],c);
    }
    cout<<ans<<" ";

}
