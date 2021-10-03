int diagonalDifference(vector<vector<int>> arr) {
    
    int d1 = 0;
    int d2 = 0;
    int n = arr[0].size()-1;
    for(int i  = 0; i<=n; i++)
    {
        d1+= arr[i][i];
        d2+= arr[i][n-i];
    }
    
    int diff = abs(d1-d2);
    return diff;

}