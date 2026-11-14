class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        //concept for this question is that sorted array and we have to return the index so here we can use two pointer approach

        int n = numbers.size();
        int i= 0, j=n-1;
        while(i<j){
            if(numbers[i]+numbers[j]==target){
                return {i+1,j+1};
            }
            else if(numbers[i]+numbers[j]<target){
                i++;
            }
            else if(numbers[i]+numbers[j]>target){
                j--;
            }
        }
        return {};
    }
};