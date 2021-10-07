int viralAdvertising(int n) {
    int total =0;
    int shared = 5;
    int liked = 0;
    while(n--)
    {
        liked = shared/2;
        total+=liked;
        shared = liked*3;
    }
    return total;
}
