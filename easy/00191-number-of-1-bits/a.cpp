class Solution {
public:
    int hammingWeight(uint32_t n) {
        bitset <32> bit;
        bit = n;
        int cnt = 0;
        for(int k=0; k<32; k++){
            if(bit[k] == 1){
                cnt++;
            }
        }
        return cnt; 
    }
};
