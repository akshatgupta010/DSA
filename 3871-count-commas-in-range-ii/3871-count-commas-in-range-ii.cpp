class Solution {
public:
    long long countCommas(long long n) {

        long long threshold = 1000 ;
        long long  c = 0 ;

        while ( threshold <= n )
       {
        c += n - threshold + 1;
        threshold *= 1000 ;
       } 

       return c ;
    }
};