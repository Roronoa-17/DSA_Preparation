#include <bits/stdc++.h>
using namespace std;

void Unique_element(int *arr, int size)
{
    int ans = 0;
    for(int i = 0 ; i < size; i++)
    {
        ans = ans ^ arr[i];
    }

    cout<<ans<<endl;
}


int main()
{
    int a[9] = {1, 1 ,2 ,3 ,5,4,3,2,4};

    Unique_element(a, 9);

    return 0;
}