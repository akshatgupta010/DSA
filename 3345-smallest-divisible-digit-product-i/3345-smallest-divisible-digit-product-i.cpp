class Solution {
public:
    int smallestNumber(int n, int t) {

        int temp = 0;
        int ans = 0 ;

        for (int i = n; i <= 100; i++) {
            ans = i ;
            temp = i;
            int rem = 0, product = 1;

            while (temp > 0) {

                rem = temp % 10;

                temp = temp / 10;

                product *= rem;
            }

            if (product % t == 0) {
                break;
            } else {
                continue;
            }
        }

        return ans;
    }
};