class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                // int temp = matrix[i][j];
                // matrix[i][j] = matrix[j][i];
                // matrix[j][i] = temp;

                swap(matrix[i][j] , matrix[j][i]);
            }
        }


        for(int i=0;i<n;i++){
            reverse(matrix[i].begin() , matrix[i].end());
        }
    //     int si = 0;
    //     int sj =0 ,i,j,curi,curj ,nexti,nextj,temp;
    //     int n = matrix.size();
    //    while(si <= (n-1)/2 && sj <= (n-1)/2){
    //          i=si,j =sj;
    //          while(j < (n-i)){
    //             curi = i;
    //             curj = j;

    //             nexti = j ;
    //             nextj = n-i-1;

    //             int temp = matrix[nexti][nextj];
    //             matrix[nexti][nextj] =  matrix[curi][curj];

    //             int x = nexti;
    //             int y = nextj;
    //              curi = nexti;
    //             curj = nextj;

    //             nexti = y ;
    //             nextj = n-x-1;
    //             int temp1= matrix[nexti][nextj];
    //             matrix[nexti][nextj] = temp;

    //               x = nexti;
    //              y = nextj;
    //              curi = nexti;
    //             curj = nextj;

    //             nexti = y ;
    //             nextj = n-x-1;
    //             int temp2= matrix[nexti][nextj];
    //             matrix[nexti][nextj] =temp1;

    //               x = nexti;
    //              y = nextj;
    //              curi = nexti;
    //             curj = nextj;

    //             nexti = y ;
    //             nextj = n-x-1;
    //             matrix[nexti][nextj] = temp2;
    //             j++;

    //          }

    //        si++;
    //        sj++;
    //    }


        
    }
};