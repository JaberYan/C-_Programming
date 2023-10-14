#include<bits/stdc++.h>
using namespace std;
namespace jaber
{
    int age=23;
    void hello()
    {
        cout<<"HEllO"<<endl;
    }
    // class person
    // {
    //     public:
    //         string name;
    //         person(string name)
    //         {
    //             this->name=name;
    //         }
    // };
}
namespace riyan
{
    int age2=23;
    void hello2()
    {
        cout<<"hello"<<endl;
    }
}
using namespace jaber;
using namespace riyan;
int main()
{
    cout<<age<<endl;
    hello();
    cout<<age2<<endl;
    hello2();
    return 0;
}