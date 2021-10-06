int utopianTree(int n) {
    
    int h = 1;
    if(n == 0)
        return h;
    else {
        for(int i = 1; i<=n; i++)
        {
            if(i%2 == 0)
            {
                h+=1;
            }
            else {
                h*=2;
            }
        }
    }
    return h;
}