#include<bits/stdc++.h>
using namespace std;
#include <string.h>
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
       int a,b,c,d;

       cin>>a;
       cin>>b;
       cin>>c;
       cin>>d;

       if(a>b)
       {
        int temp = a;
        a=b;
        b=temp;
       }

        if(c>d)
       {
        int temp = c;
        c=d;
        d=temp;
       }

       if(a<c && b>d)
       {
        cout<<"NO"<<endl;
       }
       else if(c<a && d>b)
       {
        cout<<"NO"<<endl;
       }
       else if(c>b || a>d)
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