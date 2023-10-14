#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        string s,ss;
        cin>>s>>ss;
        int sss=ss.size();
        while (s.find(ss)!=-1)
        {
            s.replace(s.find(ss),sss,"$");
        }
        cout<<s<<endl;
    }
    
    return 0;
}