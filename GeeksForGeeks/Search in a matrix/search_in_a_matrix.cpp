class Solution{
public:	
	int matSearch (vector <vector <int>> &mat, int n, int m, int x)
	{
	    int row = 0;
	    int col = m-1;
	    
	    while(row < n && col >= 0){
	        
	        int element = mat[row][col];
	        
	        if(element == x){
	            return true;
	        }
	        else if(element > x){
	            col--;
	        }
	        else {
	            row++;
	        }
	    }
	    return false;
	}
};
