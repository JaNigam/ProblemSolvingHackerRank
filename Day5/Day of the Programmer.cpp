string dayOfProgrammer(int year) {
    
    string res = "";
    if(year<=1918)
    {
        if(year == 1918)
        {
            res = "26.09."+to_string(year);
        }
        else {
            if(year%4==0)
        {
            res = "12.09."+to_string(year);
        }
        else {
            res = "13.09."+to_string(year);
        }
        }
    
    }
   
    else {
        if(year%400 == 0)
        {
           res ="12.09."+to_string(year);
        }
        else if(year%4==0 && year%100!=0)
        {
            res = "12.09."+to_string(year);
        }
    
        else 
        {
           res =  "13.09."+to_string(year);
        }
    
    }
    
    return res; 
    
}
