class Solution {
public:
    bool isPalindrome(string s) {

        int n = s.size() ;

        int l = 0 , r = n-1 ;

        while ( l < r )
        {
            if ( !iswalnum(s[l]))
            {
                l++ ;
            }else if ( !iswalnum(s[r]))
            {
                r-- ;
            }else if ( tolower(s[l]) == tolower(s[r]) )
            {
                l++ ;
                r-- ;
            }else {
                return false ;
            }
        }
        return true ;
        
    }
};