#include<bits/stdc++.h>
using namespace std;
#include <string.h>
int main()
{
    int t;
    cin>>t;

    

    while(t--)
    {
       string s;
       cin>>s;

       string hours = s.substr(0, 2);  
       string minutes = s.substr(3, 2);

       int h = stoi(hours);
       int a = h/12;
       h = h%12;
       if(h==0)
       {
        h=12;
       }
       
       string newhour = to_string(h);
    //    if(newhour == "0")
    //    {
    //     newhour = "12";
    //    }
       if(h<10)
       {
        newhour = '0'+newhour;
       }

       if(a==0)
       {
        cout<<newhour<<":"<<minutes<<" AM"<<endl;
       }
       else
       {
        cout<<newhour<<":"<<minutes<<" PM"<<endl;
       }

        
    }
    return 0;
}