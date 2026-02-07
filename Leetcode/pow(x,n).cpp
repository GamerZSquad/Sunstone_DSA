class Solution {
public:
    double myPow(double x, int n) {

        //  n ko long long data type me convert krenge jisse overflow na ho
        // Because abs(INT_MIN) overflows krta hai int datatype ko
        long long power = n;

        // ye final answer store krega
        double result = 1.0;

        // If power  is negative:
        // x^(-n) = (1/x)^n
        if (power < 0) {
            x = 1 / x;        // base invert krke solve krenge
            power = -power;  // power ko positive krne ke liye
        }

        // Binary exponentiation loop(means 2 ka power 3 hai to 2*2*2 krega)
        while (power > 0) {

            // agar yha pr  power  odd hai
            // to result ko x se multiply krenge
            if (power % 2 == 1)
                result *= x;

            // base ka square krna hai
            x *= x;

            // power ko divide krna hai 2 se
            power /= 2;
        }

        // final result
        return result;
    }
};
