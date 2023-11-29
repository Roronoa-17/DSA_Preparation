bool PossibleSolution(vector<int> v, int k, int mid)
{
    int painterno = 1;
    int blocksum = 0;
    for(int i = 0; i < v.size() ; i++)
    {
        if(blocksum + v[i] <= mid)
        {
            blocksum+=v[i];
        }
        else
        {
            painterno++;
            if(painterno > k || v[i] > mid)
            {
                return false;
            }
            blocksum = v[i];
        }
    }
    return true;
}

int findLargestMinDistance(vector<int> &boards, int k)
{
    //    Write your code here.
    int s = 0;
    int sum = 0;
    for(int i = 0; i < boards.size() ; i++)
    {
        sum+=boards[i];
    }
    int e = sum;
    int mid = 0;
    int ans = -1;
    while(s<=e)
    {
        mid = s + (e-s)/2;
        if(PossibleSolution(boards, k, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;   
        }
    }
    return ans;

}