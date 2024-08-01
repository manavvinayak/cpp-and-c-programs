class Solution {
  public:
    vector<int> spirallyTraverse(vector<vector<int> > &matrix) {
       
        int row=matrix.size();
        int col=matrix[0].size();
        int count=0;
        vector<int> ans;
        
        int startingRow=0;
        int startingCol=0;
        int endingRow=row-1;
        int endingCol=col-1;
        
        while(count < row*col){
            
            for(int i=startingCol;count < row*col && i<=endingCol;i++){
                ans.push_back(matrix[startingRow][i]);
                count++;
            }
            startingRow++;
           
            for(int i=startingRow;count < row*col && i<=endingRow;i++){
                ans.push_back(matrix[i][endingCol]);
                count++;
            }
            endingCol--;
           
            for(int i=endingCol;count < row*col && i>=startingCol;i--){
                ans.push_back(matrix[endingRow][i]);
                count++;
            }
            endingRow--;
           
            for(int i=endingRow;count < row*col && i>=startingRow;i--){
                ans.push_back(matrix[i][startingCol]);
                count++;
            }
            startingCol++;
        }
        return ans;
    }
};
