#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    vector<int> score = {1,2,3,4,5};
    while(t--)
    {
        int tot = 0;
        //vector<vector<char>> v;
        vector<int> count(5,0);
        vector<vector<int>> v;
        for(int i =0;i<10;i++)
        {
            vector<int> a;
            for(int j=0;j<10;j++)
            {
                char c;
                cin>>c;
                //a.push_back(c);
                if(c=='X')
                {
                    if(i==0 || j== 0 || i== 9 || j==9)
                    {
                        tot+= score[0];
                        count[0]++;
                        a.push_back(1);
                    }
                    else if(i==1 || j== 1 || i== 8 || j==8)
                    {
                        tot+= score[1];
                        count[1]++;
                        a.push_back(2);
                    }
                    else if(i==2 || j== 2 || i== 7 || j==7)
                    {
                        tot+= score[2];
                        count[2]++;
                        a.push_back(3);
                    }
                    else if(i==3 || j== 3 || i== 6 || j==6)
                    {
                        tot+= score[3];
                        count[3]++;
                        a.push_back(4);
                    }
                    else if(i==4 || j== 4 || i== 5 || j==5)
                    {
                        tot+= score[4];
                        count[4]++;
                        a.push_back(5);
                    }
                }

            }
            v.push_back(a);
        }
        cout<<tot<<endl;
        // for(int i=0;i<10;i++)
        // {
        //     for(int j=0;j<10;j++)
        //     {
        //         cout<<v[i][j];
        //     }
        //     cout<<endl;
        // }
    }
    return 0;
        
}