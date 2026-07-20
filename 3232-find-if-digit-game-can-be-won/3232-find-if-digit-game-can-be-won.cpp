class Solution {
public:
    bool canAliceWin(vector<int>& nums) {

        long sum = 0;
        long sum1 = 0;

        for (int i = 0; i < nums.size(); i++) {

            if (nums[i] <= 9) {
                sum += nums[i];
            } else {
                sum1 += nums[i];
            }

        }

        
            if (sum != sum1) {
                return true ;
            }else {
                return false ;
            }

    }
};