#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    //int x = 0;

    while(t--)
    {
        int n;
        cin>>n;
        int sum = 0;
        for(int i =0;i<n-1;i++)
        {
            int z;
            cin>>z;
            sum+= z;
        }
        cout<<sum*-1<<endl;
    }
    return 0;
        
}