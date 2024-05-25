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
        vector<int> v;

        for(int i =0;i<n;i++){
            int a;
            cin>>a;
            v.push_back(a);
        }

        if(v[0]!=1)
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