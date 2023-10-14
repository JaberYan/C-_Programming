#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
        string name;
        int cls;
        char section;
        int id;
};
int main()
{
    int n;
    cin>>n;
    student a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i].name>>a[i].cls>>a[i].section>>a[i].id;
    }
    for (int i = 0; i < n-1; i++)
    {
        for(int j=i+1;j<n;j++)
        {
            // int tmp=a[i].id;
            // a[i].id=a[j].id;
            // a[j].id=tmp;
            swap(a[i].id,a[j].id);
        }
    }
    // int ptr=0;
    // int ptr2=n-1;
    // while (ptr<ptr2)
    // {
    //     swap(a[ptr].id,a[ptr2].id);
    //     ptr++;
    //     ptr2--;
    // }
    for (int i = 0; i < n; i++)
    {
        cout<<a[i].name<<" "<<a[i].cls<<" "<<a[i].section<<" "<<a[i].id<<endl;
    }
    return 0;
}