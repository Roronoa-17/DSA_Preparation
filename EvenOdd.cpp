#include <iostream>
using namespace std;

bool IsEven(int a)
{
    if(a&1)
    {
        return false;
    }
    return true;
}

int main()
{
    int n;
    cin>>n;

    cout<<IsEven(n)<<endl;
    return 0;
}