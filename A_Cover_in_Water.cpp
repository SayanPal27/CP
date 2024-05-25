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

        int count = 0;

        string s;
        cin>>s;

        if(s.find("...")!=string::npos)
        {
            cout<<"2"<<endl;
        }
        else{
            for(int i =0;i<s.size();i++)
            {
                if(s[i]=='.')
                {
                    count++;
                }
            }
            cout<<count<<endl;
        }

    }
    return 0;
}