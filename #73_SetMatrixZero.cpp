class Solution {
    public:
        void setZeroes(vector<vector<int>>& matrix) {
            int row=matrix.size();
            int col=matrix[0].size();
            vector<bool>rowmarker(row,false);
            vector<bool>colmarker(col,false);
            for(int i=0;i<matrix.size();i++){
                for(int j=0;j<matrix[0].size();j++){
                    if(matrix[i][j]==0){
                      rowmarker[i]=true;
                      colmarker[j]=true;
                    }
                }
            }
            for(int i=0;i<row;i++){
                if(rowmarker[i]){
                    for(int j=0;j<col;j++){
                        matrix[i][j]=0;
                    }
                }
            }
              for(int i=0;i<col;i++){
                if(colmarker[i]){
                    for(int j=0;j<row;j++){
                        matrix[j][i]=0;
                    }
                }
            }
        }
    };