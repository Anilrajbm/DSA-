class Solution {
public:
    bool check(vector<int>& nums) {
        int count = 0;
        for(int j=0;j<nums.size();j++){
            if(nums[j] > nums[(j+1) % nums.size()] )
            count++;
        }
        return count <=1;
    }
};