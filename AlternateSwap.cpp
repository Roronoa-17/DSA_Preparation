#include <bits/stdc++.h>
using namespace std;

void SwapAlternate(vector<int> &a)
{
    for(int k=0; k < a.size() ; k+=2)
    {
        if(k+1 < a.size())
        {
            swap(a[k], a[k+1]);

        }
    }
    
}

int main()
{
    vector<int> a = {1, 2, 3, 4, 5};

    SwapAlternate(a);

    for(int i:a)
    {
        cout<<i<<" ";
    }

    return 0;
}