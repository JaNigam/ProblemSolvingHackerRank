int birthday(vector<int> s, int d, int m) {
    int count= 0;
    int monthLength = m;
    int daySum = 0;
    for(int i =0; i<monthLength; i++)
    {
        daySum+=s[i];
    }
    
    if(daySum == d)
        count++;
    
    for(int j = monthLength; j<s.size(); j++)
    {
        
        daySum+=s[j];
        daySum-=s[j-monthLength];
        if(daySum == d)
            count++;
    }
    
    return count;

}
