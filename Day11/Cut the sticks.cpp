vector<int> cutTheSticks(vector<int> arr) {
    vector<int> res;
    
    while(arr.size()>0)
    {
        res.push_back(arr.size());    
        int lowest = *min_element(arr.begin(), arr.end());
        for(int i = 0; i<arr.size(); i++)arr[i]-=lowest;
        //to clear all the zeros from the array
        arr.erase(remove(arr.begin(), arr.end(), 0),arr.end());
    }
    return res;
    
}