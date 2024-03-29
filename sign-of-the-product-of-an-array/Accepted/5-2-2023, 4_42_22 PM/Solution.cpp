// https://leetcode.com/problems/sign-of-the-product-of-an-array

class Solution {
public:
    int arraySign(vector<int>& nums) {
        int count_negetive = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i] == 0){
                return 0;
            }
            if(nums[i]<0){
                count_negetive +=1;
            }
        }
        if(count_negetive % 2 == 0){
            return 1;
        }
        else{
            return -1;
        }
    }
};