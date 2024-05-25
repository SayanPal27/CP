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

        map<int,int> mp;
        for(int i =0;i<n;i++)
        {
            mp[v[i]]++;
        }
        vector<int> dist;
        for(auto it : mp)
        {
            dist.push_back(it.first);
        }
        if(dist.size()>2)
        {
            cout<<"No"<<endl;
        }
        else if(dist.size()==2 && abs(mp[dist[0]] - mp[dist[1]]) > 1)
        {
            cout<<"No"<<endl;
        }
        else
        {
            cout<<"Yes"<<endl;
        }

    }
    return 0;
}