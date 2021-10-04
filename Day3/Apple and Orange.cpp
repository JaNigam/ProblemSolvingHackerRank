void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges) {
    
    int app = 0;
    int org = 0;
    
    for(auto ap: apples)
    {
        if(a+ap >= s && a+ap<=t)
            app++;
    }
    
    for(auto o: oranges)
    {
        if(o+b<=t  && o+b>=s)
            org++;
    }
    cout<<app<<endl<<org;

}