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
        //cout<<k<<endl;

        vector<int> v1,v2;
        int flag = 0;
        
        for(int i =0;i<n;i++)
        {
            int c;
            cin>>c;
            v1.push_back(c);
            v2.push_back(c);
            
        }
        sort(v1.begin(),v1.end());
        for(int i=0;i<n;i++)
        {
            if(v1[i]!=v2[i])
            {
                flag = 1;
                break;
            }
        }
        if(k>1)
        {
            cout<<"YES"<<endl;
            //continue;
        }
        else if(flag == 0)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }


    }
    //cout<<x<<endl;
    return 0;
}