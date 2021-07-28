#include<bits/stdc++.h>
using namespace std;

int rev(string a)
{
    //int factor=0;
    if(a.length()==0)
        return 0;

    string c=a.substr(1);
    rev(c);
    cout<<a[0];
}
int main()
{

    string a;
    rev("binod");
}
