#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        char Name[100];
        int roll;
        int cls;
        int section;
        Student(int s,int r,char* n,int c)
        {
            roll=r;
            strcpy(Name,n);
            cls=c;
            section=s;
        }
};
int main()
{
    Student jaber('A',49,"jaber",5);
    Student riyan('B',50,"riyan",7);
    cout<<riyan.section<<endl;
    cout<<riyan.roll<<endl;
    cout<<riyan.Name<<endl;
    cout<<riyan.cls<<endl;
    cout<<jaber.section<<endl;
    cout<<jaber.roll<<endl;
    cout<<jaber.Name<<endl;
    cout<<jaber.cls<<endl;
    return 0;
}