/*
1 
2 3
4 5 6
 
*/

#include <iostream>
using namespace std;

int main()
{
    int n=0;
    cin>>n;

    int row=1;
    int val=1;
    while(row<=n)
    {
        int col=1;
        while(col<=row)
        {
            cout<<val;
            val++;
            col++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}