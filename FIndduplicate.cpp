#include <bits/stdc++.h>
using namespace std;

int FindDuplicate(vector <int> &a)
{
    int ans = 0;
    for(int i = 0 ; i < a.size() ; i++)
    {
        ans = ans ^ a[i];
    }

    for(int i = 1 ; i < a.size() ; i++)
    {
        ans = ans ^ i;
    }

    return ans;
}

int main()
{
    vector <int> v = {6, 3, 1, 5, 4, 3, 2};

    cout<<FindDuplicate(v);
}