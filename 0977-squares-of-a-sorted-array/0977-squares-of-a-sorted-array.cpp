//this solution will definetely has taken more space because we split an array into 2 then we have solved this 
//in next sol we will apply the concept on one array only 
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n= nums.size();
        vector<int>a;
        vector<int>b;
        for(int i=0; i<n ;i++){
            if(nums[i]<0)
                a.push_back(nums[i]);
            else{
                b.push_back(nums[i]);
            } 
        
        }
        if(a.size()==0){
            for(int i=0; i<n;i++){
                nums[i] = nums[i]*nums[i];
            }
            return nums;
        }
        if(b.size()==0){
            for(int i=0; i<n;i++){
                nums[i] = nums[i]*nums[i];
            }
            reverse(nums.begin(), nums.end());
            return nums;
        }
        for(int i=0; i<a.size(); i++){
            a[i] = a[i]*a[i];
        }
        reverse(a.begin(), a.end());
        for(int i=0; i<b.size(); i++){
            b[i] = b[i]*b[i];
        }


        //using merge 2 array concept from here-:
        int i=0, j=0;
        int id=0;
        int x = a.size();
        int y = b.size();
        vector<int>res(x+y); 
        while(i<x && j<y){
            if(a[i]<b[j]){
                res[id]=a[i];
                i++;
                id++;
            }else{
                res[id] = b[j];
                j++;
                id++;
            }
        }
        while(j<y){
            res[id]= b[j];
            j++;
            id++;
        }
        while(i<x){
            res[id] = a[i];
            i++;
            id++;
        }
        return res;
    }
};