#include<bits/stdc++.h>
using namespace std;
class my_own_restaurent
{
    public:
        string item;
        int price;
        int quantity;
};
int main()
{
    int n;
    cin>>n;
    my_own_restaurent obj[n];
    for (int i = 0; i < n; i++)
    {
        cin>>obj[i].item>>obj[i].price>>obj[i].quantity;
    }
    
    return 0;
}