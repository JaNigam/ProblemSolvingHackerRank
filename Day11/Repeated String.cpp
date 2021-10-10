long repeatedString(string s, long n) {
    long counta = 0;
    long len = s.length();
    for(char c:s)
        if(c == 'a') counta++;
        
    long res = (n/len)*counta;
    if(n%len == 0)return res;
    else{
        int r = n%len;
        for(int i = 0; i<r; i++)
            if(s[i] == 'a')res++;
    }
    return res;
}