#include<iostream>
using namespace std;
#include<bits/stdc++.h>

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;

        cin>>y;
        cin>>x;

        //int screens = x/2 + x%2;
        int count = 0;
        while(x>0 || y>0)
        {
            if(x==0&& y>0)
            {
                count++;
                y-=15;
            }
            else if(x==1 && y>0)
            {
                count++;
                x--;
                y-= 11;
            }
            else
            {
                count++;
                x-=2;
                y-=7;
            }
        }

        cout<<count<<endl;

    }
    return 0;
}