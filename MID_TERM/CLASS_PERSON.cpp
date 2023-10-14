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
    person* jaber=new person("jaber",5.6,46);
    cout<<jaber->Name<<endl;
    cout<<(*jaber).Height<<endl;
    cout<<jaber->age<<endl;
    return 0;
}