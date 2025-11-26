class Solution {
public:
    bool searchMatrix( vector<vector<int>>& matrix, int target) {
        vector <int> a;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                a.push_back(matrix[i][j]);
            }
        }
        return binary_search(a.begin(),a.end(),target);
    }
};
