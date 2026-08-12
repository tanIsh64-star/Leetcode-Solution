class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        
        int rows = matrix.size();
        int cols = matrix[0].size();

        vector<int> rowMin;
        vector<int> colMax;

        for (int i = 0; i < rows; i++) {
            int mn = matrix[i][0];

            for (int j = 1; j < cols; j++) {
                mn = min(mn, matrix[i][j]);
            }

            rowMin.push_back(mn);
        }

        for (int j = 0; j < cols; j++) {
            int mx = matrix[0][j];

            for (int i = 1; i < rows; i++) {
                mx = max(mx, matrix[i][j]);
            }

            colMax.push_back(mx);
        }

        vector<int> ans;

        for (int x : rowMin) {
            for (int y : colMax) {
                if (x == y) {
                    ans.push_back(x);
                }
            }
        }

        return ans;
    }
};