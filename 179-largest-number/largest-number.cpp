class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector <string> nums_str;

        for(auto i:nums){
            nums_str.push_back(to_string(i));
        }
        sort(nums_str.begin(),nums_str.end(),[](const string &a,const string &b){
            return (b+a) < (a+b);
        });
        if(nums_str[0]=="0"){
            return "0";
        }

        string result;
        for(auto i:nums_str){
            result += i;
        }


        return result;
    }
};