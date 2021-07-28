#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int x=1,num,res=0;
    cin>>n;

    while(x<=n)
    {
        x*=16;
    }
    x/=16;
    cout<<x<<endl;
    while(x>0)
    {
        num=n/x;
        n-=num*x;
        x/=16;

        if(num<=9)
        {
            res=res+to_string(num);
            cout<<res;
        }
        else
        {
            char c='A'+num-10;
            cout<<c;
        }


    }
    //cout<<res;
}
