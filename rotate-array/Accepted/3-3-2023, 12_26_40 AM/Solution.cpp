// https://leetcode.com/problems/rotate-array

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> numcopy(n);
        for(int i=0;i<n;i++) numcopy[i]=nums[i];
        for(int i=0;i<n;i++) 
            nums[(i+k)%n]=numcopy[i];
        
        
    }
};