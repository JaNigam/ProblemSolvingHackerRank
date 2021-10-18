int minimumDistances(vector<int> a) {
    
    vector<int> res;
    unordered_map<int, vector<int>>m;
    for (int i = 0; i<a.size(); i++)m[a[i]].push_back(i);
    
    for(auto it = m.begin(); it!=m.end();it++){
        
        
        if(it->second.size()>1)
        {
            sort(it->second.begin(), it->second.end());    
            int a = it->second[0];
            int b = it->second[1];
            res.push_back(abs(a-b));
        }
        
    }
    
    if(res.size()==0)return -1;
    else{
        
        sort(res.begin(), res.end());
        return(res[0]);
    }
    
}