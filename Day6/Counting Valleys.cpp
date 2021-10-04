int countingValleys(int steps, string path) {
    
    int count = 0; //zero vallies at start
    int lvl = 0;// we start with lvl zero
    int flag = 0; // to indicate start of the valley
    for(auto p : path)
    {
        if(p == 'U') lvl++;
        else lvl--;
        
        if(lvl<0  && !flag)
        {
            count++;
            flag = 1;
        }
        
        if(flag && lvl == 0) //valley ends
            flag = 0;
            
    }

    return count;
}