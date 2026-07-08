class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int l = 0 ; 
        int r = matrix.size() -1 ;  
            for(int i = 0 ; i < matrix.size() ;i++ )
            {
                for(int j = 0 ; j < matrix.size() ;j++ )
                {
                    while(l <= r)
                    {
                    int m = (l + r) / 2 ;
                    if(matrix[i][j] == target)
                    {
                        return true ;
                    }
                    else if(matrix[i][j] > target)
                    {
                        r = m - 1 ;
                    }
                    else{
                        l = m + 1;
                    }
                }
            }
        }
        return false ;
    }
};
