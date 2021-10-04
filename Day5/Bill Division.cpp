void bonAppetit(vector<int> bill, int k, int b) {
    
    bill.erase(bill.begin()+k);
    int toBeCharged = 0;
    for(auto e:bill)
        toBeCharged+=e;
        
    toBeCharged/=2;
    if(b-toBeCharged == 0) 
        cout<<"Bon Appetit"<<endl;
    else
        cout<<b-toBeCharged<<endl;
    
}