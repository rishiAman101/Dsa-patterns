class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n= nums.size();           
        // concept kya kehta hai that unsorted array hai aur index return krna hai toh isme TWO POINTER APPROACH NHI LGEGI

        //Brute force time comp = n^2 and space comp = 0(1)
        //Using hashmap time comp = n but space comp = n

        unordered_map<int, int> m;
        for(int i=0; i<n ; i++){
            if(m.find(target-nums[i])!=m.end()){
                return {m[target-nums[i]], i};
            }
            m[nums[i]] = i;
        }
        return {};
    }
};