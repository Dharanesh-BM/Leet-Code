class Solution {
public:
    int subtractProductAndSum(int n) {
        string num = to_string(n);
        int sum=0,product=1;

        for(char i:num){
            sum += (i-'0');
            product *= (i-'0');
        }
        
        return product-sum;

    }
};