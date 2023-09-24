class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int max = *max_element(nums.begin(), nums.end());

        vector<int> H(max+1, 0);
        for(int i = 0 ; i < nums.size(); i++)
        {
            H[nums[i]]++;
        }
        vector<int> n;
        for(int i = 0 ; i < H.size() ; i++)
        {
            if(H[i]>1)
            {
                n.push_back(i);
            }
        }
        return n;
    }
};