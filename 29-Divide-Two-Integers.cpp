class Solution {
public:
    int divide(int dividend, int divisor) {
        int result;
\t\tif (dividend >= INT_MAX && divisor == 1)\tresult = INT_MAX;
\t\telse if(dividend <= INT_MIN && divisor == 1) result = INT_MIN;
\t\telse if(dividend <= INT_MIN && divisor == -1) result = abs(INT_MAX);
\t\telse result  = dividend / divisor;
    \treturn result;
    }
};