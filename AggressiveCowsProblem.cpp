bool PossibleSol(vector<int> &v, int k , int mid)
{
    int cowCount = 1;
    int lastPos = v[0];

    for (int i = 0; i<v.size() ; i++)
    {
        if(v[i] - lastPos >= mid)
        {
            cowCount++;
            if(cowCount==k)
            {
                return true;
            }
            lastPos = v[i];
        }
    }
    return false;
}

int aggressiveCows(vector<int> &stalls, int k)
{
    //    Write your code here.
    sort(stalls.begin(), stalls.end());
    int s = 0;
    int maxi = -1;
    for(int i = 0; i<stalls.size() ; i++)
    {
        maxi = max(maxi, stalls[i]);
    }
    int e = maxi;
    int ans = -1;
    int mid = 0;

    while(s<=e)
    {
        mid = s + (e-s)/2;
        if(PossibleSol(stalls, k, mid))
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        
    }
    return ans;
}