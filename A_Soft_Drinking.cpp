#include<iostream>
using namespace std;
#include<bits/stdc++.h>

int main()
{
    int n, k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    cout<< min(min((k*l)/nl,c*d),p/np) /n;
    return 0;
}