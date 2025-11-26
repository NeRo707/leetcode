class Solution {
public:
    int singleNumber( vector<int>& nums) {
        map<int, int> mp;
        for(auto k : nums){
            mp[k]++;
        }
        for(auto k : mp){
            if(k.second == 1) return k.first;
        }
        return 0;
    }
};
