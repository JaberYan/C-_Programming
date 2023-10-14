#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int cnt_word=0;
    int inside_word=false;
    for(char c:s)
    {
        if (isalpha(c))
        {
            if (inside_word==false)
            {
                cnt_word++;
            }
            inside_word=true;
        }
        else
        {
            inside_word=false;
        }
    }
    cout<<cnt_word<<endl;
    return 0;
}