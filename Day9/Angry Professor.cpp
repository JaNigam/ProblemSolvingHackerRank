string angryProfessor(int k, vector<int> a) {
    
    //k = threshold
    int count = 0;
    for(int i = 0; i<a.size(); i++)
    {
        if(a[i]<=0)
            count++;
    }
    
    if(count>=k)
        return "NO";
    else return "YES";
    

}