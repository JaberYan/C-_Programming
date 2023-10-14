#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    //syntax=data_type* array_name=new data_type[size];

    int* array=new int[n];
    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;
    return 0;
}