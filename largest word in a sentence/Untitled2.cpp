#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;
    cin.ignore();

    char a[n+1];
    //cin>>a[n];
    cin.getline(a,n);
    //cin.ignore();

    int clength=0,mxlength=0;
    int i=0;
    while(1)
    {
        if(a[i]==' '|| a[i]=='\0')
        {
            if(clength>mxlength)
            {
                mxlength=clength;
            }
            clength=0;
        }
        else
            clength++;
        if(a[i]=='\0'){
            break;
        }
        i++;
    }
    cout<<mxlength;
}
