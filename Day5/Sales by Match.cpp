int sockMerchant(int n, vector<int> ar) {
    unordered_map<int, int> m;
    for(auto e: ar)
        m[e]++;
    
    int pairs = 0;
    for (auto it = m.begin(); it!=m.end(); it++)
    {
        pairs+=(it->second/2);
    }
    
    return pairs;
}