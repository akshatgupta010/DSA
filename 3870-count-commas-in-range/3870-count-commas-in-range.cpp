class Solution {
public:
    int countCommas(int n) {

        int c = 0 ;
        if ( n >= 1000 ){
        for ( int i = 1000 ; i <= n ; i ++ )
        {
            c ++ ;
        }
        }else
        {
            return c ;
        }

        return c ;
    }
};