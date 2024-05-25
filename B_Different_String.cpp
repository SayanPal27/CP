#include<bits/stdc++.h>
using namespace std;
#include <string.h>
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
       string s;
       cin>>s;

       int diffindex = 0;
        int i;
       for(i =0;i<s.size();i++)
       {
        if(s[i]!=s[0])
        {
            cout<<"YES"<<endl;
            char temp = s[i];
            s[i] = s[0];
            s[0] = temp;
            cout<<s<<endl;
            break;
        }

       }
       if(i==s.size())
       {
        cout<<"NO"<<endl;
       }
        
    }
    return 0;
}