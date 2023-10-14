#include<bits/stdc++.h>
using namespace std;// Ai + Aj + j - i
int main()
{
    int n;
    cin>>n;
    int mn=INT_MAX;
    for (int i = 0; i < n; i++)
    {
        int m;
        cin>>m;
        int arr[m];
        for (int j = 0; j < m; j++)
        {
            cin>>arr[j];
        }
        for (int j = 0; j < m-1; j++)
        {
            for (int k = j+1; k < m; k++)
            {
                int val=arr[j]+arr[k]+(k+1)-(j+1);
                mn=min(mn,val);
            }
            
        }
        cout<<mn;
        
    }
    
    return 0;
}