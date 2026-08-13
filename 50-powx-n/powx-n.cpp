class Solution {
public:
    double myPow(double x, int n) {
        long long newN = n; // Use long long to handle overflow when n = INT_MIN
        
        if (newN < 0) {
            newN = -newN;
        }

        double ans = 1.0;
        
        while (newN > 0) {
            if (newN % 2 == 1) { // If exponent is odd
                ans *= x;
            }
            x *= x;      // Square the base
            newN /= 2;   // Divide exponent by 2
        }

        if (n < 0) {
            ans = 1.0 / ans;
        }

        return ans;
    }
};