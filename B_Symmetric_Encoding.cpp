#include<iostream>
using namespace std;
#include<bits/stdc++.h>

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        string s;
        cin>>s;

        vector<char> word1;
        vector<char> word2;
        vector<char> word3;

        for(auto i : s)
        {
            word1.push_back(i);
            word2.push_back(i);
        }
        set<char> wordset;
        sort(word1.begin(),word1.end());
        for(auto i : word1)
        {
            wordset.insert(i);
        }

        map<char,char> mp;
        for(auto i:wordset)
        {
            word3.push_back(i);
        }
        int l = word3.size();
        for(int i = 0;i<l;i++)
        {
            mp[word3[i]] = word3[l-1-i];
        }

        string ans = "";
        for(int i =0;i< word2.size();i++)
        {
            ans+= mp[word2[i]];
        }
        cout<<ans<<endl;

    }
    return 0;
}