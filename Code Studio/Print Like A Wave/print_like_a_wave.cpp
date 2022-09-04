vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    vector<int> wave;
    
    for(int j=0; j<mCols; j++){  
        
        // If even top to bottom
        if(j%2 == 0){
            for(int i=0; i<nRows; i++){
                wave.push_back(arr[i][j]);
            }
        }
        // If odd bottom to top
        else{
            for(int i=nRows-1; i>=0; i--){
                wave.push_back(arr[i][j]);
            }
        }
    }
    return wave;
}
