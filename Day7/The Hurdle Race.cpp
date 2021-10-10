int hurdleRace(int k, vector<int> height) {
    
    int maxi = INT_MIN;
    for(auto e:height)
    {
        maxi = max(maxi, e);
    }
    
    if(k>maxi)
        return 0;
    else return (maxi-k);

}
