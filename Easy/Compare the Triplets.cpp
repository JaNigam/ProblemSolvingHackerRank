vector<int> compareTriplets(vector<int> a, vector<int> b) {
    
    int alis, bob;
    alis = bob = 0;
    
    for(int i = 0; i<3; i++)
    {
        if(a[i]>b[i])
            alis++;
        else if(a[i] < b[i])
            bob++;
        else
            continue;
    }
    
    vector<int> v;
    v.push_back(alis);
    v.push_back(bob);
    return v;

}