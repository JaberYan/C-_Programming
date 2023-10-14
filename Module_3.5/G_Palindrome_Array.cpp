#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int brr[n];
    for (int i = 0; i < n; i++)
    {
        brr[i]=arr[i];
    }
    int crr[n];
    for (int i = n-1; i >= 0; i--)
    {
        for (int j = 0; j < n; j++)
        {
            crr[j]=arr[i];
        }   
    }
    for (int i = 0; i < n; i++)
    {
        cout<<crr[i]<<" ";
    }
    return 0;
}