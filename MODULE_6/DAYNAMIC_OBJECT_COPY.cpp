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
    person* jaber=new person("jaber riyan",56);
    person* riyan=new person("riyan jaber",23);
    *jaber=*riyan;
    delete riyan;
    cout<<jaber->name<<" "<<jaber->age<<endl;  
    // cout<<riyan->name<<" "<<riyan->age<<endl;  
    return 0;
}