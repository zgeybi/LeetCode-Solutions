class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int in_hand = 0, i = digits.size() - 1;
        while (true){
            if (i != 0) {
                if (digits[i] == 9) {
                    digits[i] = 0;
                    in_hand = 1;
                    i--;
                } else {
                    digits[i] += 1;
                    break;
                }
            } else {
                if (digits[i] == 9) {
                    digits.push_back(0);
                    digits[0] = 1;
                    break;
                } else {
                    digits[0]++;
                    break;
                }
            }
            
        }
        return digits;
    }
};
