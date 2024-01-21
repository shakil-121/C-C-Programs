//You will have to print the digit that has been used the most number of times in that number.

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    char c;
    int i,cnt=1,max=0;
    for(i=0;i<s.size();i++)
    {
        if(s[i]==s[i+1])
        {
      cnt++;
        if(cnt>max)
        {
            c=s[i];
        }
    }
       else
            cnt=1;
    }
    cout<<c<<endl;
}
