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
    int as;
    int c=0;

    for(int i =0;i<n;i++)
    {

         {
             as=max(i,a[i]);
             cout<<as<<" ";

         }
    }


}

