string organizingContainers(vector<vector<int>> container) {
    vector<int> containerSize;
    vector<int> totalBalls(container.size(), 0);
    for(auto v:container)
    {
        containerSize.push_back(accumulate(v.begin(), v.end(), 0));
        for(int i = 0; i<v.size(); i++)
        {
            totalBalls[i]+=v[i];
        }
    }
    
    sort(containerSize.begin(), containerSize.end());
    sort(totalBalls.begin(), totalBalls.end());
    if(containerSize == totalBalls)return "Possible";
    else return "Impossible";
}