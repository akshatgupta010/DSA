class Solution {
public:
    int maxArea(vector<int>& nums) {

        int n = nums.size() ;
        int left = 0 , right = n -1 ;
        int c = 0 ;

        while ( left < right )
        {
        
            int a = min(nums[left] , nums[right]) ;

            int b = right - left ;

            c = max(c,a*b) ;

            if  ( nums[left] < nums[right] )
            {
                left ++ ;
            }else {
                right -- ;
            }
        }

        return  c ;
        
    }
};