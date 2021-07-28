#include<bits/stdc++.h>
using namespace std;

int fact(int n)
{
    //int factor=0;
    if(n==1)
        return 1;

    int facto=fact(n-1);
    return n*facto;
}

int main()
{
    int n;
    cin>>n;

   cout<<fact(n);

}
