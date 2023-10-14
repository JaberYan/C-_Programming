#include<bits/stdc++.h>
using namespace std;
int main()
{
    int X,N;
    cin>>X>>N;
    long long int sum=0;
    for (int i = 2; i <= N; i+=2)
    {
        sum=sum+pow(X*1.0,i*1.0);
    }
    cout<<sum;
    return 0;
}