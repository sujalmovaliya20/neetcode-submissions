class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int i=0;

        int n=nums.size();
        while(i<n){
            int j=i+1;
            while(j<n){
            if(nums[i]==nums[j]){
                return true;
            }
            else{
                j++;
            }
        
        }
    i++;
        }
        return false;
    }
};