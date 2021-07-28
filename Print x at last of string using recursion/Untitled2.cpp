#include<bits/stdc++.h>
#include<string>
using namespace std;

string prints(string s)
{
    if(s.length()==0)
        return " ";

        char c=s[0];
        string ans=prints(s.substr(1));

        if(c=='x')
            return ans+c;
        return c+ans;


}
int main()
{

cout<<prints("axxcdxxcixxbde");

}
