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

    //(*jaber).name==jaber->name;
    
    cout<<riyan->name;
    return 0;
}