#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        char name[100];
        int roll;
        char section;
        int math_marks;
        int cls;
    Student(char* n,int r,int s,int m_m,int c)
    {
        strcpy(name,n);
        roll=r;
        section=s;
        math_marks=m_m;
        cls=c;
    }
};
int main()
{
    char name[100]="Jaber";
    Student jaber(name,59,'A',79,6);
    char name2[100]="Riyan";
    Student riyan(name2,56,'B',70,6);
    char name3[100]="yan";
    Student yan(name3,79,'M',75,7);
    if (jaber.math_marks>riyan.math_marks && jaber.math_marks>yan.math_marks)
    {
        cout<<jaber.math_marks;
    }
    else if (riyan.math_marks>jaber.math_marks && riyan.math_marks>yan.math_marks)
    {
        cout<<riyan.math_marks;
    }
    else
    {
        cout<<yan.math_marks;
    }
    return 0;
}