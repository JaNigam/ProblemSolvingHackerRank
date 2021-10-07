vector<int> circularArrayRotation(vector<int> a, int k, vector<int> queries) {
    
    unordered_map<int, int>m;
    int n = a.size();
    for(int i = 0; i<n; i++)
        m[(i+k)%n] = a[i];
        
    vector<int> v;    
    for(auto q : queries)
    {
        int res = m.find(q)->second;
        v.push_back(res);
    }
    
    return  v;
}