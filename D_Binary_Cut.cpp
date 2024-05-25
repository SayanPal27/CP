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

       int count = 0;

       int n = s.size();
       int flag = 0;
       
       int i = 0;
       while(i<n)
       {
        if(s[i]=='0'&&s[i+1]=='1'&&flag == 0)
        {
            //count++;
            flag = 1;
        }
        else if(s[i]=='0'&&s[i+1]=='1'&&flag == 1)
        {
            count++;
           // flag = 1;
        }
        else if(s[i]=='1'&&s[i+1]== '0')
        {
            count++;
        }
        //cout<<s[i];
        i++;


       }
       cout<<count+1<<endl;
    }
    return 0;
}