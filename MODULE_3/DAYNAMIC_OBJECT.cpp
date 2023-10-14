// #include<bits/stdc++.h>
// using namespace std;
// class Student
// {
//     public:
//         char Name[100];
//         int roll;
//         int cls;
//         char section;
//     Student(char* n,int r,int c,char s)
//     {
//         strcpy(Name,n);
//         roll=r;
//         cls=c;
//         section=s;
//     }    
// }; 
// int main()
// {
//     char name[100]="jaber";
//     Student* rahim=new Student(name,4,6,'A');
//     cout<<(*rahim).Name<<endl;
//     cout<<(*rahim).roll<<endl;
//     cout<<(*rahim).cls<<endl;
//     cout<<(*rahim).section<<endl;
//     //(*rahim).roll=rahim->roll;
//     cout<<rahim->cls<<endl;
//     cout<<rahim->Name<<endl;
//     cout<<rahim->section<<endl;
//     cout<<rahim->roll<<endl;
//     //delete ;
//     delete[] rahim;
//     cout<<rahim->cls<<endl;
//     cout<<rahim->Name<<endl;
//     cout<<rahim->section<<endl;
//     cout<<rahim->roll<<endl;
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
class fun
{
    public:
        char name[100];
        int cls;
        int roll;
        char section;
    fun(char* n,int c,int r,char s)
    {
        strcpy(name,n);
        cls=c;
        roll=r;
        section=s;
    }
};
int main()
{
    char name[100]="jaber";
    fun* jaber=new fun(name,5,56,'A');
    char name2[100]="riyan";
    fun* riyan=new fun(name2,6,67,'D');
    cout<<(*jaber).name<<endl;
    //(*jaber).name=jaber->name;
    cout<<riyan->name;
    return 0;
}
//-> is called the arrow operator. It is formed using a minus sign followed by a greater than sign. Simply put: To access the members of a structure, use the dot operator. To access structure members through a pointer, use the arrow operator.
