#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    getline(cin,a);
    stringstream aa(a);
    int cnt=0;
    string word;
    // while (aa>>word)
    // {
    //     cout<<word<<endl;
    // }
    while (aa>>word)
    {
        cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}