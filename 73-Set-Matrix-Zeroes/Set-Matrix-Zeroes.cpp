class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        unordered_set<int> st1;
        unordered_set<int> st2;

        int rows = matrix.size();
        int cols = matrix[0].size();
       

       for(int i=0;i<rows;i++){
           for(int j=0;j<cols;j++){
               if(matrix[i][j] == 0){
                   st1.insert(i);
                   st2.insert(j);
               }
           }
       }

       for(int i=0;i<rows;i++){
           for(int j=0;j<cols;j++){
               if(st1.find(i) != st1.end() || st2.find(j) != st2.end()){
                   matrix[i][j]=0;
               }
           }
       }
    }
};