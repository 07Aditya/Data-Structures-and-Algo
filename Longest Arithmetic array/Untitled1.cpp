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
    int f=0;
int c=0;
int mx;
    for(int i =0;i<n-1;i++)
    {
      c=a[i+1]-a[i];
      //cout<<c<<" "<<endl;
      mx=max(f,c);
      f=c;
    }

    int v;
    for(int i =0;i<n-1;i++)
    {
      if(a[i+1]-a[i] == mx )
      {
          v=a[i+1];
          if(a[i+2]-a[i+1] == mx || a[i+1] )
          {
          cout<<a[i]<<" ";

          }
      }
    }
   cout<<v;



}


