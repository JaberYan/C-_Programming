#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int mx=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = n-1; j > 0 ; j--)
        {
            mx=max(a[i],a[j]);
        }
        
    }
    cout<<mx;
    return 0;
}