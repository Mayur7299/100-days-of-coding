class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<int,int>a;
        unordered_map<int,int>b;
        for(auto it:s)
        {
            a[it]+=1;
        }
        for(auto it:t)
        {
            b[it]+=1;
        }

        if(a==b)
        {
            return true;
        }
        return false;
        
    }
};
