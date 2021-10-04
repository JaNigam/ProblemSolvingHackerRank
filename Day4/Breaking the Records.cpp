vector<int> breakingRecords(vector<int> scores) {
    vector<int> res;
    int minr = scores[0];
    int maxr = scores[0];
    int minc = 0;
    int maxc = 0;
    
    for(int i = 1; i<scores.size(); i++)
    {
        if(scores[i]<minr)
        {
            minr = scores[i];
            minc++;
        }
        
        if(scores[i]>maxr)
        {
            maxr = scores[i];
            maxc++;
        }
    }
    
    res.push_back(maxc);
    res.push_back(minc);
    
    return res;
}