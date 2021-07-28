#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n,res=0;
    string num;
    cin>>num;
    int x=1;
    n=num.size();

    for(int i=n-1;i>=0;i--)
    {
        if(num[i] >= '0'&& num[i] <= '9')
        {
            res += x*(num[i]-'0');
        }
        else if(num[i]>='A'&& num[i]<='F')
        {
            res += x*(num[i]-'A'+10);
        }
        x*=16;
    }
    cout<<res;

}
