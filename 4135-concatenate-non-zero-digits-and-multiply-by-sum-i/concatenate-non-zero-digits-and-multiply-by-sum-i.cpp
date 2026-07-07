class Solution {
public:
    long long sumAndMultiply(int n) {
        long long num = 0;
        int sum = 0;
        long long place = 1;

        while (n > 0) {
            int d = n % 10;
            if (d != 0) {
                sum += d;
                num += 1LL * d * place;
                place *= 10;
            }
            n /= 10;
        }

        return num * sum;
    }
};