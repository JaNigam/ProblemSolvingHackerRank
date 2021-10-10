int pickingNumbers(vector<int> a) {
    
  //we'll need two pointers;
  int q = 0;
  int p = 1;
  int result = 1;
  int curr = 1;
  sort(a.begin(), a.end());
  
  while(p<a.size())
  {
      if(abs(a[p] - a[q])>=2)
      {
          //this means that the diff b/w new ele
          //and the first elem of the array is >=2
          //hence the condition for the quesiton fails
          //thus start with a new array hence increment q 
          //make p = q so that when p increments the next
          //element is element next to q and not q itself
          q++;
          p = q;
          curr = 1;
      }
      else {
          curr++;
          result = max(result, curr);
      }
      p++;
  }
    return result;
}