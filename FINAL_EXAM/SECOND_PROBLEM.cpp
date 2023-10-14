#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    stringstream ss(s);
    string word;
    string rat="Ratul";
    int flag=0;
    while (ss>>word)
    {
        if (word==rat)
        {
            flag=1;
        }
    }
    if (flag==0)
    {
        cout<<"NO";
    }
    else
    {
        cout<<"YES";
    }
    return 0;
}