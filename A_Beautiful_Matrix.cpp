#include<iostream>
using namespace std;
#include<bits/stdc++.h>

int main()
{
    int r,c;
    int A[5][5];
   for(int i =0;i<5;i++)
   {
    for(int j=0;j<5;j++)
    {
        cin>> A[i][j];
        if(A[i][j]==1)
        {
            r=i;
            c=j;
        }
    }
   }
   cout<< abs(r-2)+abs(c-2);
    return 0;
}