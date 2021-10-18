string encryption(string s) {
    //removing extra spaces
    s.erase(remove(s.begin(), s.end(), ' '), s.end());
    float len  = s.length();
    int c = ceil(sqrt(len));
    int r = floor(sqrt(len));
    cout<<c<<" "<<r;
    string res = "";
    for(int i = 0; i<c; i++){
        for(int j = i; j<s.length(); j+=c){
            res.push_back(s[j]);
        }
        res+=" ";
    }
    
    return res;
}