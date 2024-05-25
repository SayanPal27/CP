#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    

    while(t--)
    {
       int n;
        cin>>n;
       char ans[2*n][2*n];

       for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            // Alternate between '#' and '.' based on the sum of row and column indices
            if ((i + j) % 2 == 0) {
                ans[2*i][2*j] = '#';
                ans[2*i][2*j+1] = '#';
                ans[2*i+1][2*j] = '#';
                ans[2*i+1][2*j+1] = '#';
            } else {
                ans[2*i][2*j] = '.';
                ans[2*i][2*j+1] = '.';
                ans[2*i+1][2*j] = '.';
                ans[2*i+1][2*j+1] = '.';
            }
        }
        //cout << endl;  // Move to the next line after each row
    }
    for (int i = 0; i < 2*n; i++) {
        for (int j = 0; j < 2*n; j++) {
            cout<<ans[i][j];
        }
        cout << endl;  // Move to the next line after each row
    }

    }
    return 0;
}