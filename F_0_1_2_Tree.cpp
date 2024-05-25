#include<bits/stdc++.h>
using namespace std;
#include <string.h>
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

       int minHeight = ceil(log2(c + 1));

    // Add additional levels required for nodes with 1 and 2 children
    minHeight += a + b;
    cout<<minHeight<<endl;
        
    }
    return 0;
}