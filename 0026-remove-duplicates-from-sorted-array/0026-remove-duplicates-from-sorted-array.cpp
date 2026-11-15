class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int i=0;
        int j=1;
        int count = 1;
        while(j<n){
            if(nums[i]==nums[j]){
                j++;
            }
            else{
                nums[i+1]=nums[j];
                count++;
                i++;
                j++;
            } 
        }
        return count;
    }
};