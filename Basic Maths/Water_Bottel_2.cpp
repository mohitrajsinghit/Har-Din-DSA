class Solution {
public:
    int maxBottlesDrunk(int initialBottles, int exchangeRate) {
        int totalBottles = initialBottles;
        int remainingBottles = initialBottles;
        
        while (remainingBottles >= exchangeRate) {
            remainingBottles -= exchangeRate;
            remainingBottles++;
            totalBottles++;
            exchangeRate++;
            cout << totalBottles << " " << remainingBottles << endl;
        }
        
        return totalBottles;
    }
};
