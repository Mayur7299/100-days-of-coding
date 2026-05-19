class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>m;
        vector<int>a;
        for(int i:nums)
        {
            m[i]+=1;
        }
        int z=floor(nums.size()/3);
        for(auto it:m)
        {
            if(it.second>z)
            {
                a.push_back(it.first);
            }
        }
        return a;
    }
};