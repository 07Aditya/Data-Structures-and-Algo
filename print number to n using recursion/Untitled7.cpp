#include<bits/stdc++.h>
using namespace std;

int decreasing(int n,int i)
{
    if(n==i )
        return n;

   cout<<n<<" ";
    return decreasing(n-1,i);
}
int increas(int n,int i)
{
    if(i==n )
        return i;

   cout<<i<<" ";
    return increas(n,i+1);
}
int main()
{
    int i=1;
    int n;
    cin>>n;


    cout<<decreasing(n,i);
    cout<<endl;
    cout<<increas(n,i);

}

