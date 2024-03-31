#include <iostream>

class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int sum = 0;
        int numm = x;
        while (numm > 0) {
            sum += numm % 10;
            numm /= 10;
        }
        
        if (x % sum == 0) {
            return sum;
        } else {
            return -1;
        }
    }
};
