class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int ans = nums[n-1] ;

        int res = nums[n-1] ;

        for (int i = 0; i < 2; i++) {

            res *= nums[i] ;


            ans *= nums[n - i - 2];
        }

        if ( res > ans )
        {

            return res ;
        }else {
            return ans;
        }

  
    }
};