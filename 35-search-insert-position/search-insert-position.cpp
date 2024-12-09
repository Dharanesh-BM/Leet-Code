class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {

        int left = 0;
        int right = nums.size()-1;
        int mid;

        while (left <= right){
            mid = (left+right)/2;
            // cout << left << " " << right << endl;
            // cout << mid << endl;
            if(nums[mid] == target) return mid;

            if(nums[mid] < target) left = mid+1;
            else if(nums[mid] > target) right = mid-1;
        }
        
        if(nums[mid] < target) return mid+1;
        return mid;
    }
};