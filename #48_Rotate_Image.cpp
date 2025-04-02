#A1:

class Solution {
    public:
        void rotate(vector<vector<int>>& matrix) {
            int n=matrix.size();
            vector<vector<int>>rotated(n,vector<int>(n,0));
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++) {
                    rotated[j][n-i-1]=matrix[i][j];
                }
            }
            for(int i =0;i<n;i++){
                for(int j=0;j<n;j++){
                    matrix[i][j]=rotated[i][j];
                }
            }
        }
    };


#A2:

class Solution {
    public:
        void rotate(vector<vector<int>>& matrix) {
            int row=matrix.size();
            int col=matrix[0].size();
            for(int i=0;i<row;i++){
                for(int j=i+1;j<row;j++){
                   swap(matrix[i][j],matrix[j][i]);
                }
            }
            for(int i=0;i<row;i++){
                reverse(matrix[i].begin(),matrix[i].end());
            }
        }
    };