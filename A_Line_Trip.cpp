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

        vector<int> v;
        v.push_back(0);

        for(int i =0;i<n;i++)
        {
            int c;
            cin>>c;
            v.push_back(c);

        }
        int flag =0;
        if(v[n-1]!= k)
        {
            v.push_back(k);
            flag = 1;
        }


        int maxi = 0;
        for(int i =0 ;i<v.size()-1;i++)
        {
            if(i==v.size()-2 && flag == 0)
            {
                maxi = max(maxi,v[i+1]-v[i]);
            }
            else if(i==v.size()-2 && flag == 1)
            {
                maxi = max(maxi,2*(v[i+1]-v[i]));
            }
            else{
                maxi = max(maxi,(v[i+1]-v[i]));
            }
            
        }
        cout<<maxi<<endl;
    }
    
    return 0;
}