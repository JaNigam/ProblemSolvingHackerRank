int getMoneySpent(vector<int> keyboards, vector<int> drives, int b) {
    vector<int>v;
    for(auto i : keyboards)
    {
        for(auto j: drives)
        {
            if(i+j == b)
                return b;
            if(i+j<b)
                v.push_back(i+j);
        }
    }

    if(v.size())
    {
        sort(v.begin(), v.end());
        return v[v.size()-1];    
    }
    else return -1;
    
}