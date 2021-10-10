int jumpingOnClouds(vector<int> c) {
    int jumps = 0;
    int path = 0;
    while(path<c.size())
    {
        if(c[path+2] == 0 && path+2<=c.size()-1)
        {
            jumps++;
            path+=2;
        }
        else {
            jumps++;
            path+=1;
        }    
    }
    
    return jumps-1;

}