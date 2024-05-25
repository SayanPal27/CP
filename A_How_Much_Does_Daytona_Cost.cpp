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

        int k;
        cin>>k;
        int flag = 0;
        for(int i =0;i<n;i++)
        {
            int c;
            cin>>c;
            if(c==k)
            {
                flag = 1;
            }
        }

        if(flag == 0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }   

    }
    return 0;
}