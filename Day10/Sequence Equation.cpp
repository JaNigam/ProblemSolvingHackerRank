vector<int> permutationEquation(vector<int> p) {
    vector<int> v;
    unordered_map<int, int>m;
    //int elem, its index
    for (int i = 0; i<p.size(); i++) 
            m[p[i]] = i+1;
            
    for(int x = 1; x<=p.size(); x++)
    {
        int firstfunct = m.find(x)->second;
        int secondfucnt = m.find(firstfunct)->second;
        v.push_back(secondfucnt);
    }
    
    return v;

}