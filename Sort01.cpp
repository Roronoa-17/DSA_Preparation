#include<bits/stdc++.h>
using namespace std;

void Sort01(vector<int> &as)
{
    int i = 0, j = as.size()-1;
    while(i<j)
    {
        while(as[i]==0)
        {
            i++;
        }
        while(as[j]==1)
        {
            j--;
        }
        if(i < j)
        {
            swap(as[i], as[j]);
            i++;
            j--;
        }
    }
}


int main()
{
    vector<int> v = {1, 0, 0, 1,0 ,1};

    Sort01(v);
    for(int i:v)
    {
        cout<<i<<" ";
    }

    return 0;
}