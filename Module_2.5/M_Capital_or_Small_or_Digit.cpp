#include<bits/stdc++.h>
using namespace std;
int main()
{
    char o;
    cin>>o;
    if (o>='A' && o<='Z')
    {
        cout<<"ALPHA"<<endl<<"IS CAPITAL";
    }
    else if(o>='a' && o<='z')
    {
        cout<<"ALPHA"<<endl<<"IS SMALL";
    }
    else
    {
        cout<<"IS DIGIT";
    }
    return 0;
}