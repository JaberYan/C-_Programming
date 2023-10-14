#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    char c,n;
    int ans;
    cin>>a>>c>>b>>n>>ans;
    int ans1=a+b;
    int ans2=a-b;
    int ans3=a*b;
    switch (c)
    {
        case '+':
            if (ans==ans1)
            {
                cout<<"Yes";
            }
            else
            {
                cout<<ans1;
            }
            break;
        case '-':
            if (ans==ans2)
            {
                cout<<"Yes";
            }
            else
            {
                cout<<ans2;
            }
            break;
        case '*':
            if (ans==ans3)
            {
                cout<<"Yes";
            }
            else
            {
                cout<<ans3;
            }
            break;
    }
    return 0;
}