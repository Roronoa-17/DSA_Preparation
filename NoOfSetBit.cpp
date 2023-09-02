#include <iostream>
using namespace std;

int NoOfSetBit (int n)
{
    int count = 0;
    while(n!=0)
    {
        if(n&1)
        {
            count++;
        }
        n = n >> 1;
    }
    return count;
}

int main()
{
    int n;
    cin>>n;

    cout<<NoOfSetBit(n)<<endl;
    return 0;
}