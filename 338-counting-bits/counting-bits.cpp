class Solution {
public:
   int count_bits(int n)
   {
    int count=0;
      while(n!=0)
      {
        if(n&1)count++;
        n/=2;
      }
      return count;
   }

    vector<int> countBits(int n){
       vector<int>b;
       for(int i=0;i<=n;i++)b.push_back(count_bits(i));
       return b;
    }
};