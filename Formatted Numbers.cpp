//Read an integer variable and print it in which the digits are separated into groups of three by commas.


#include<bits/stdc++.h>
using namespace std;
signed main()
{
    string s;
    cin>>s;
    reverse(s.begin(),s.end());
    string ss="";
    int cnt,i;
    for(i=0;i<s.size();i++)
    {
        if(cnt==3)
        {
            ss+=',';
            ss+=s[i];
            cnt=0;
        }
        else
        {
            ss+=s[i];
        }
        cnt++;
    }
    reverse(ss.begin(),ss.end());
    cout<<ss<<endl;

    return 0;
}
