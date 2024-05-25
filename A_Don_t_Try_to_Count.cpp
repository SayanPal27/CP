#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    int x = 0;

    while(t--)
    {
        int n;
        cin>>n;

        int m;
        cin>>m;

        string s;
        cin>>s;

        string x;
        cin>>x;

        int count = 0;
        int flag = 0;
        while(s.size()<=100*(x.size()))
        {
            if(s.find(x)!=string::npos)
            {
                cout<<count<<endl;
                flag = 1;
                break;
                
            }
            else
            {
                s=s+s;
               // cout<<s<<endl;
                count++;
            }
        }
        if(flag == 0)
        {
            cout<<-1<<endl;
        }
        
        

    }
    return 0;
}