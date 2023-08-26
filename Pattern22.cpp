/*
   1
  22
 333
4444
*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int i = 1;

    while(i <= n)
    {
        int space = n - i;
        int j = 1;
        while(space--)
        {
            cout<<" ";
        }

        while(j <= i)
        {
            cout<<i;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}