#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main()
{
    vector<string> vec1;
    vector<string> vec2;
    int n,m;
    string element;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>element;
        vec1.push_back(element);
    }


    string ele;
    cin>>m;
    for(int i=0;i<m;i++)
    {
        cin>>ele;
        vec2.push_back(ele);
    }


    for(int i=0;i<m;i++)
    {
        int count=0;

        for(int j=0;j<n;j++)
        {
             if(vec2[i]==vec1[j])
             {
                 count++;
             }
        }
        cout<<count<<endl;
    }

}
