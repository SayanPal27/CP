#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    

    while(t--)
    {
        int a,b,c;
        cin>>a;
        cin>>b;
        cin>>c;

        if(a<b && b<c)
        {
            cout<<"STAIR"<<endl;
        }
        else if(a<b && b>c)
        {
            cout<<"PEAK"<<endl;
        }
        else{
            cout<<"NONE"<<endl;
        }

    }
    return 0;
}