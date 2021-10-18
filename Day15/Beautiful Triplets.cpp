int beautifulTriplets(int d, vector<int> arr) {
    int res = 0;
    for(int i = 0; i<arr.size()-2;i++){
        for(int k = i+2; k<arr.size(); k++)
            if(arr[k] - arr[i] == 2*d)res++;
    }
    return res;
}