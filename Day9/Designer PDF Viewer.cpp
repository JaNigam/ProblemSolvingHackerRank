int designerPdfViewer(vector<int> h, string word) {
    int maxi = INT_MIN;
    for(char e:word)
    {
        int i = e;
        int height = h[i-97]; 
        maxi = max(maxi, height);
    }
    return maxi*word.length();

}