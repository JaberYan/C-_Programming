#include<bits/stdc++.h>
using namespace std;
class person
{
    public:
        char Name[100];
        float Height;
        int age;

        person(char* n,float h,int a)
        {
            strcpy(Name,n);
            Height=h;
            age=a;
        }
};
int main()
{
    char name1[100]="jaber";
    person* jaber=new person(name1,5.6,46);
    char name2[100]="riyan";
    person* riyan=new person(name2,5.4,56);
    if (jaber->age>riyan->age)
    {
        cout<<jaber->Name<<endl;
    }
    else
    {
        cout<<riyan->Name<<endl;
    }
    return 0;
}