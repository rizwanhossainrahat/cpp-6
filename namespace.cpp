#include<bits/stdc++.h>
using namespace std;

namespace Rakib
{
    int age=20;
    void hello()
    {
        cout<<"rakib namespace"<<endl;
    }
};

namespace Sakib
{
    int age2=20;
    void hello2()
    {
        cout<<"sakib namespace"<<endl;
    }
};
using namespace Rakib;
// using namespace Sakib;
int main()
{
    cout<<age<<endl;
    // cout<<age2<<endl;
    hello();
    Sakib::hello2();
    return 0;
}