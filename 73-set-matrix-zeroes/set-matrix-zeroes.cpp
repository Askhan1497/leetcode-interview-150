class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();

        vector<vector<int>>matrix2 = matrix;

    
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++)
                matrix2[i][j] = matrix[i][j];
        }
        
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(matrix[i][j] == 0){
                    for(int k=0; k<n; k++)
                        matrix2[i][k] = 0;

                    for(int k=0; k<m; k++)
                        matrix2[k][j] = 0;
                }
            }
        }
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                matrix[i][j] = matrix2[i][j];
            }
        }
    }
};