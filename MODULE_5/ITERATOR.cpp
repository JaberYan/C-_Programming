#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    // string::iterator it;
    // cout<<*a.begin()<<endl;//first index character;
    // cout<<*(a.begin()+2)<<endl;//ebabe o first er tar porer ta print kora jay;
    // cout<<*a.end()<<endl;//eta seser dike jai nul print kore de;
    // cout<<*(a.end()-2)<<endl;//eta diye o seset tar ager character print kora jay;
    for(string::iterator it=a.begin();it<a.end();it++)
    {
        cout<<*it<<endl;
    }
    // for(auto it=a.begin();it<a.end();it++)
    // {
    //     cout<<*it<<endl;
    // }
    // return 0;
}