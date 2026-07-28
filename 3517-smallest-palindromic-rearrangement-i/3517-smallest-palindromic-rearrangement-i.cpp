class Solution {
public:
    string smallestPalindrome(string s) {

        int n = s.size() ;

        vector<int> freq(26,0) ;


        for ( auto x : s )  freq[x-'a'] ++ ;

        string ans = "" ;

        for ( int i = 0 ; i < 26 ; i ++ )
        {
            if ( freq[i] > 0 )
            {
                int y = freq[i]/2 ;
                freq[i] -= 2*y ;
                while ( y -- ) ans += (i+'a') ;
             }
        }

        string temp = ans ;
        for(int i=0;i<26;i++){
            if(freq[i]>0) ans+=(i+'a');
        }
         reverse(begin(temp),end(temp));
        return ans+temp;
    }
};