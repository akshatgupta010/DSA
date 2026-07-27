// OPTIMISED APPORACH 

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size() ;
        int max = INT_MIN ;
        int max2 = INT_MIN ;

        for ( int a : nums )
        {
            if ( a > max )
            {
                max2 = max ;
                max = a ;
            }else if ( a > max2)
            {
                max2 = a ;
            }
        }

        return (max-1)*(max2-1) ;

    }
};