#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int m;
        char b;
        cin>>m>>b;
        // string s;
        // s.resize(m,b);
        // cout<<s<<endl;
        // cout<<b<<endl;
        // cin.ignore();
        for (int i = 0; i < m; i++)
        {
            cout<<" "<<b;
        }
        cout<<endl;
        
    }
    return 0;
}