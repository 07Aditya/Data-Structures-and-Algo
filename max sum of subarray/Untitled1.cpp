#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int mx=0;
    int mxsum=INT_MIN;
    for(int i=0;i<n;i++)
    {
        mx+=a[i];
        if(mx<0)
        {
            mx=0;
        }
        mxsum=max(mx,mxsum);
    }
    cout<<mxsum;
}
