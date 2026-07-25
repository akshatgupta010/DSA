class Solution {
public:
    int maxProduct(int n) {
        
        int product = 1 ;
        int largest = 0 , secondlargest = 0 ;
       
        while ( n > 0 )
        {
            int rem = n % 10 ;

            if ( rem > largest )
            {
                secondlargest = largest ;
                largest = rem ;
            }else if ( rem > secondlargest )
            {
                secondlargest = rem ;
            }
            n /= 10 ;
        }

        return largest*secondlargest ;
    }
};