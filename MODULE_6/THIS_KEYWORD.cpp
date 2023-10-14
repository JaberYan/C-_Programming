#include<bits/stdc++.h>
using namespace std;
class person
{
    public:
        string name;
        int age;
        person(string name,int age)
        {
            this->name=name;
            this->age=age;
        }
        void hello()
        {
            cout<<"Hello"<<endl;
        }
};
int main()
{
    person jaber("jaber riyan",56);
    jaber.hello();
    cout<<jaber.name<<" "<<jaber.age<<endl;   
    return 0;
}