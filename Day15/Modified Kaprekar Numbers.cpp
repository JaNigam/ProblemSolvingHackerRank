void kaprekarNumbers(int p, int q) {
    vector<int>v;
    for (int i = p; i<=q; i++) {
        long int sq = (long)i*i;
        int len = to_string(i).length();
        int r = sq%(int)(pow(10, len));
        int l = sq/(int)(pow(10, len));
        if(r+l == i)v.push_back(i);
    }
    if(v.size() == 0)cout<<"INVALID RANGE";
    else{
        for(auto e:v)cout<<e<<" ";
    }
}