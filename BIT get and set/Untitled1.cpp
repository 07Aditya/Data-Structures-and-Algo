#include<bits/stdc++.h>
using namespace std;

int getbit(int n,int pos)
{
    return ((n &(1<<pos))!=0);
}

int setbit(int n,int pos)
{
    return (n|(1<<pos));
}
int clearbit(int n,int pos)
{
    int mask=~(1<<pos);
    return (n&mask);
}

int updatebit(int n,int pos)
{
    int mask=~((1<<pos));
    int num= (n&mask);
    return(mask|(1<<num));
}
int main()
{
   cout<<updatebit(5,1);
}
