#include <bits/stdc++.h>
using namespace std;

void Unique_element(vector<int> &a)
{
    int ans = 0;
    for(int i = 0 ; i < a.size(); i++)
    {
        ans = ans ^ a[i];
    }

    cout<<ans<<endl;
}


int main()
{
    vector<int> a = {1, 1 ,2 ,3 ,5,4,3,2,4,5,10};

    Unique_element(a);

    return 0;
}