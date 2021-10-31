class Solution {
public:
    int get(int n, long  p)
    {
      long p1 = p * 10, gap = n - n%p1, d = (n/p) %10;
       if (d < 1)
        return gap / 10;
       if (d == 1)
        return (gap / 10 + n%p + 1);
      return ((gap + p1) / 10);
    }
    int countDigitOne(int n) 
    {
        long a=0,p=1;
        while(p<=n)
        {
            a += get(n,p);
            p*=10;
        }
        return a;
    }
};
