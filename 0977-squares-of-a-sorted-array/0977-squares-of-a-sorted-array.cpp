class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {

       int n = nums.size() ;
       int c = 0 ;

        for ( int i = 0 ; i < n ; i ++ )
        {
            nums[c] = nums[i] * nums[i] ;
            c++ ;
        }

        sort( nums.begin() , nums.end() );
        
        return nums ;
    }


};