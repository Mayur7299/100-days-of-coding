class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=floor(nums.size()/2);
        int c=0;
        unordered_map<int,int>m;
        for(int i : nums)
        {
            m[i]+=1;
        }

       for(auto it:m)
       {
        if(it.second>n)
        {
            return it.first;
        }
       }

        return -1;
    }
};