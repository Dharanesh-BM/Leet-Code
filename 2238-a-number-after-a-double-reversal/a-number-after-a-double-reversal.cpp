class Solution {
public:
    bool isSameAfterReversals(int num) {
        int reversed1 = reverseInteger(num);
        int reversed2 = reverseInteger(reversed1);
        
        cout << reversed1 << " " << reversed2 << endl;
        if(num == reversed2) return true;
        return false;

    }

    int reverseInteger(int num){
        int result = 0;

        while(num >= 10){
            result = result + num%10;
            result *= 10;
            num /= 10;
        }

        return result + num;
    }
};