#include<bits/stdc++.h>
using namespace std;
class person
{
    public:
        string name;
        int age;
        float height;
        int marks1;
        int marks2;
        person(string nm,int ag,float hei,int mar1,int mar2)
        {
            name=nm;
            age=ag;
            height=hei;
            marks1=mar1;
            marks2=mar2;
        }
        void hello()
        {
            cout<<"hello"<<endl;
        }
        int total_marks()
        {
            return marks1+marks2;
        }
};
int main()
{
    person jaber("jaber",45,5.6,45,45);
    cout<<jaber.name<<endl;
    cout<<jaber.age<<endl;
    cout<<jaber.height<<endl;
    cout<<jaber.marks1<<endl;
    cout<<jaber.marks2<<endl;
    jaber.hello();
    int total=jaber.total_marks();
    cout<<total<<endl;
    return 0;
}