#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<string> vec1;
    int n;
    string ele,m;
    cin>>n;
    for(int i=0;i<n;i++)
    {
      cin>>ele;
      vec1.push_back(ele);
    }

   cin>>m;

   int count=0;
   for(int i=0;i<n;i++)
    {//cout<<vec1[i];
        if(m==vec1[i])
        {
            count++;
        }
    }
    cout<<count;

}
