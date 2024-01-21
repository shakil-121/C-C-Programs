#include <bits/stdc++.h>
using namespace std;

#define   MOD        1000000007
#define   int        long long int
#define   endl       '\n'
#define   rayhan()   ios_base::sync_with_stdio(false);cin.tie(NULL);

signed main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int Cnt=0;
        string s;
        cin >> s;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='N'||s[i]=='W'||s[i]=='D')
            {
                continue;
            }
            else Cnt++;
        }

        int Baki_Ball=Cnt%6;
        int Koy_Over=Cnt/6;

        if(Koy_Over==0)
        {
            if(Baki_Ball==1)cout<<Baki_Ball<<" "<<"BALL\n";
            else cout<<Baki_Ball<<" "<<"BALLS\n";
        }

        else if(Baki_Ball==0)
        {
            if(Koy_Over==1)cout<<Koy_Over<<" "<<"OVER\n";
            else cout<<Koy_Over<<" "<<"OVERS\n";
        }

        else
        {
            if(Koy_Over==1)cout<<Koy_Over<<" "<<"OVER"<<" ";
            else cout<<Koy_Over<<" "<<"OVERS"<<" ";

            if(Baki_Ball==1)cout<<Baki_Ball<<" "<<"BALL\n";
            else cout<<Baki_Ball<<" "<<"BALLS\n";
        }
    }
}
