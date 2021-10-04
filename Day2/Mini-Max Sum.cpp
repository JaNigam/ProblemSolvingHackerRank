void miniMaxSum(vector<int> arr) {
    long int mini = 0;
    long int maxi = 0;
    sort(arr.begin(), arr.end());
    for(int i = 0; i<=3; i++)
    {
        mini+=arr[i];
    }
    
    for(int i = arr.size()-1; i>=1; i--)
    {
        maxi+=arr[i];
    }
    
    cout<<mini<<" "<<maxi;
    

}