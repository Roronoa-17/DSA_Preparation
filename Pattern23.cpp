/*
1234
 234
  34
   4
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
        int space =  i - 1;
        while(space--)
        {
            cout<<" ";
        }
        int value = i;
        int j = 1;
        while(j <= n - i + 1)
        {
            cout<<value++;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}