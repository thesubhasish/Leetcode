class Solution {
public:
    string baseNeg2(int n) {
         if (n == 0) return "0";

        string res = "";

        while (n != 0) {
            int rem = n % 2;

            if (rem < 0) {
                rem += 2;
            }

            res += char('0' + rem);
            n = (n - rem) / -2;
        }

        reverse(res.begin(), res.end());
        return res;
    }
};