void staircase(int n) {
    
    for(int i = 1; i<=n; i++)
    {
        for(int s = 1; s<=n-i; s++)
        {
            cout<<" ";
        }
        
        for(int h = 1; h<=i; h++)
        {
            cout<<"#";
        }
        cout<<endl;
        
    }

}