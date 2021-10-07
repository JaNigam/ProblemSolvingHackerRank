int saveThePrisoner(int n, int m, int s) {
    int rem = m%n;
    //this condition means all the candies are
    //equally distributed to all the prisoners
    //hence the last will be the n itself
    if((rem+s-1)%n == 0)
        return n;
    else
        return (rem+s-1)%n;

}