#include<iostream>
using namespace std;
#include<bits/stdc++.h>

int main()
{
   string n;
   cin>>n;
 
   for(int i =0;i<n.size();i++)
   {
    int s = n[i]-'0';
    s = min(s,9-s);
    n[i] = '0'+s;
   }
    cout<<n<<endl;
    return 0;
}