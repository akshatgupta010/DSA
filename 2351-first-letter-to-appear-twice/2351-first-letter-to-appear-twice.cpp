class Solution {
public:
    char repeatedCharacter(string s) {

        vector<int> f(26) ;

        for ( char ch : s )
        {
            f[ch -'a'] ++ ;
            if ( f[ch -'a'] > 1 )
            {
                return ch ;
            }
        }
        return 'a' ;
    }
};