int equalizeArray(vector<int> arr) {
    unordered_map<int, int>m;
    for(auto e: arr)m[e]++;
    
    int maxi = 0;
    for(auto it = m.begin(); it!=m.end(); it++)
    {
        maxi = max(maxi, it->second);
    }
    
    return(arr.size()-maxi);
}
