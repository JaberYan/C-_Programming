#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b;
    cin>>a>>b;
    int sum=a+b;
    long long mul=a*b;
    int sub=a-b;
    cout<<a<<" "<<'+'<<" "<<b<<" "<<'='<<" "<<sum<<endl;
    cout<<a<<" "<<'*'<<" "<<b<<" "<<'='<<" "<<mul<<endl;
    cout<<a<<" "<<'-'<<" "<<b<<" "<<'='<<" "<<sub<<endl;
    return 0;
}