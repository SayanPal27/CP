#include<bits/stdc++.h>
using namespace std;
#include <string.h>
bool hasOnlyZeroesAndOnes(int number) {
    while (number > 0) {
        if (number % 10 > 1) {  // Check if the last digit is not 0 or 1
            return false;
        }
        number /= 10;  // Move to the next digit
    }
    return true;
}

int main()
{

    vector<long long> isbd;
    for(long long i = 1; i<1e6;i++)
    {
        if(hasOnlyZeroesAndOnes(i))
        {
            isbd.push_back(i);
        }
    }
    int t;
    cin>>t;

    while(t--)
    {
       int n;
       cin>>n;
       int i = isbd.size()-1;
       while(n && i>=0)
       {
        if(n%isbd[i] == 0 && isbd[i]!= 1)
        {
            //cout<<isbd[i]<<" ";
            n = n/isbd[i];
        }
        else
        {
            i--;
        }
        
       }

       if(n>1)
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