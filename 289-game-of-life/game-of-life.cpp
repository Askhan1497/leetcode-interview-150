class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int n=board.size();
        int m=board[0].size();
        int cnt;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cnt=0;
                for(int k=-1;k<=1;k++){    
                    for(int l=-1;l<=1;l++){
                        if( (k|l) && i+k>=0 && i+k<n && j+l>=0 && j+l<m &&  (board[i+k][j+l]==1 || board[i+k][j+l]==-1 ))
                        cnt++;
                    }
                    
                   
                }
                 if(board[i][j]==1){
                        if(cnt!=2 && cnt!=3){
                            board[i][j]=-1;
                        }
                    }
                    if(board[i][j]==0){
                        if(cnt==3)
                        board[i][j]=2;
                    }

            }
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]==-1)
                board[i][j]=0;

                if(board[i][j]==2)
                board[i][j]=1;
            }
        }

    }
};