/*
   1
  121
 12321
1234321
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
        // printing spaces
        int space = n - i ;
        while(space--)
        {
            cout<<" ";
        }

        // priting left triangle
        int j = 1;
        while(j <= i)
        {
            cout<<j;
            j++;
        }

        //printing right triangle
        int start = i - 1;
        while(start)
        {
           cout<<start;
           start--;
        }

        cout<<endl;
        i++;
    }

    return 0;
}