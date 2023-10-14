#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    stringstream ss(s);
    string x;
    cin>>x;
    string word;
    int cnt=0;
    while (ss>>word)
    {
        if(word!=x)
        {
            continue;
        }
        else
        {
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}