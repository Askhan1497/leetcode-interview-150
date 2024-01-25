class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int count = 0;
        int m = matrix.size();
        int n = matrix[0].size();
        int left=0, right=n-1, top=0, bottom=m-1;
        int totalEle = m*n;
        vector<int> v;
        while(count<totalEle){
            for(int i =left; i <=right && count<totalEle; i++){
                v.push_back(matrix[top][i]);
                count++;
            }
            top++;
            for(int i=top; i<=bottom && count<totalEle; i++){
                v.push_back(matrix[i][right]);
                count++;
            }
            right--;
            for(int i=right; i>=left && count<totalEle; i--){
                v.push_back(matrix[bottom][i]);
                count++;
            }
            bottom--;

            for(int i=bottom; i>=top && count<totalEle; i--){
                v.push_back(matrix[i][left]);
                count++;
            }
            left++;
        }
        return v;
    }
};