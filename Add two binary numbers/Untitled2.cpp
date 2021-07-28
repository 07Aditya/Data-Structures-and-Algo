#include<bits/stdc++.h>
using namespace std;

int reverse(int num)
{
    int ans=0,n;
    while(num>0)
    {
        n=num%10;
        ans=ans*10+n;
        num=num/10;
    }
    return ans;
}


int main()
{
    int a,b;
    cin>>a>>b;
    int ans=0;
    int carry=0;
    while(a>0&&b>0)
    {
        if(a%2==0 && b%2==0)
        {
            ans=ans*10+carry;
            carry=0;
        }
        else if(a%2==0 && b%2==1||a%2==1 && b%2==0)
        {
            if(carry==1)
            {
                ans=ans*10+0;
                carry=1;
            }
            else
            {
                ans=ans*10+1;
                carry=0;
            }

        }
        else
        {
            ans=ans*10+carry;
            carry=1;
        }
    }
    a=a/10;
    b=b/10;

if(a>0)
{
    if(carry==1)
    {
        if(a%2==0)
        {
            ans=ans*10+carry;
            carry=0;
        }
        else
        {
            ans=ans*10+0;
            carry=1;

        }
    }
    else
    {
        ans=ans*10+(b%2);
        carry=0;

    }
    b=b/10;
}

if(b>0)
{
    if(carry==1)
    {
        if(b%2==0)
        {
            ans=ans*10+carry;
            carry=0;
        }
        else
        {
            ans=ans*10+0;
            carry=1;

        }
    }
    else
    {
        ans=ans*10+(b%2);
        carry=0;

    }
    b=b/10;
}
if(carry==1)
{
    ans=ans*10+1;
}
int answer=reverse(ans);
cout<<answer;


}
