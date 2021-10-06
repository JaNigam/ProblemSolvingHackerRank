int reverse(int x)
{
    int reverse = 0;
    while(x!=0)
    {
        int rem=x%10;      
        reverse=reverse*10+rem;    
        x/=10;
    }
    return reverse;
}
int beautifulDays(int i, int j, int k) {
    
    int res = 0;
    for(int x = i; x<=j; x++)
    {
        int reversed = reverse(x);
        if(abs(reversed - x)%k == 0)
            res++;
    }
    
    return res;
    

}