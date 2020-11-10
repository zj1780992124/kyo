#include <iostream>
#include <cmath>
using namespace std;

void f(int n)
{
    if(n)
    {
        cout<<n%10;
        return f(n/10);
    }
}

int main(void)
{
    int n;
    cout<<"请输入一个正整数"<<endl;
    cin>>n;
    f(n);
    return 0;
}
