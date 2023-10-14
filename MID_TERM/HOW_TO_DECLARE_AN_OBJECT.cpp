#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
        char name[100];
        int cls;
        int roll;
        char section;
};
int main()
{
    student jaber;
    char nm[100]="jaber";
    strcpy(jaber.name,nm);
    jaber.cls=3;
    jaber.roll=34;
    jaber.section='A';
    cout<<jaber.name<<endl;
    cout<<jaber.cls<<endl;
    cout<<jaber.roll<<endl;
    cout<<jaber.section<<endl;
    return 0;
}