#include<iostream>
using namespace std;
int main()
{
    int v;
    cin>>v;
    switch(v)
    {
        case 1:
            cout<<"One";
            break;
        case 2:
            cout<<"Two";
            break;
        case 3:
            cout<<"Three";
            break;
        case 4:
            cout<<"Four";
            break;
        case 5:
            cout<<"Five";
            break;
        default:
            cout<<"Don't Match";
    }
    return 0;
}