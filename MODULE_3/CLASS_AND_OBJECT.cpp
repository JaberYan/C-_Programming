#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        char Name[100];
        int Roll;
        int Cls;
        char Section;
};
int main()
{
    Student jaber;
    char nm[100]="jaber";
    strcpy(jaber.Name,nm);
    jaber.Cls=5;
    jaber.Roll=40;
    jaber.Section='A';

    Student riyan;
    riyan.Cls=7;
    riyan.Roll=50;
    riyan.Section='B';
    char ri[100]="riyan";
    strcpy(riyan.Name,ri);

    cout<<jaber.Roll<<" "<<jaber.Name;
    return 0;
}
