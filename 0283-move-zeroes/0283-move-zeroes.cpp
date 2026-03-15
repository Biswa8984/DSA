class Solution {
public:
    void moveZeroes(vector<int>& nums) {
       int temp=0;
       for(int i=0;i<nums.size();i++){
        if(nums[i]!=0){
            nums[temp]=nums[i];
            temp++;
        }
       } 
       while(temp<nums.size()){
        nums[temp++]=0;
       }
    }
};