#include <bits/stdc++.h>
using namespace std;

int GetPivot(vector<int> &a, int n)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e-s)/2;
    
    while(s<e)
    {
        if(a[mid] >= a[0])
        {
            s = mid + 1;
        }
        else 
        {
            e = mid;
        }
        mid = s + (e-s)/2;
    }

    return s;
}

int main()
{
    vector<int> v = {3, 7, 8,1};

    cout<<"Pivot at "<<GetPivot(v, 4)<<endl;
}