class Solution {
public:
vector<int> countBits( int n) {
    vector<int> res;
    for (int i = 0; i <= n; i++) {
        bitset<32> bits(i);
        int cur = bits.count();  
        res.push_back(cur);
    }
    return res;
}
};
