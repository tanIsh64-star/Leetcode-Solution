class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        
        int rows = img.size();
        int cols = img[0].size();

        vector<vector<int>> ans(rows, vector<int>(cols, 0));

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {

                int sum = 0;
                int count = 0;

                // Check 3 x 3 area
                for (int r = i - 1; r <= i + 1; r++) {
                    for (int c = j - 1; c <= j + 1; c++) {

                        // Check if cell is inside matrix
                        if (r >= 0 && r < rows &&
                            c >= 0 && c < cols) {
                            
                            sum += img[r][c];
                            count++;
                        }
                    }
                }

                ans[i][j] = sum / count;
            }
        }

        return ans;
    }
};