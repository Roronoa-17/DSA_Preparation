/*
A B C
D E F
G H I
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int i = 1;
    char c = 'A';
    while(i <= n)
    {
        int j = 1;
        while(j <= n)
        {
            cout<<c++;
            j++;
        }
        cout<<endl;
        i++;
    }
}