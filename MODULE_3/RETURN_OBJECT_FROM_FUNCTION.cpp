#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        char Name[100];
        int roll;
        int cls;
        char section;
        Student(char s,int r,char* n,int c)
        {
            roll=r;
            strcpy(Name,n);
            cls=c;
            section=s;
        }
};
Student fun()
{
    char nm[100]="jaber";
    Student rahim('A',50,nm,8); //ROV=Return value optimization; 
    return rahim;
}
int main()
{
    Student rahim=fun();
    cout<<rahim.cls<<endl;
    cout<<rahim.Name;
    return 0;
}