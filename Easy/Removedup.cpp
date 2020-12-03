class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        if(nums.size()==1 || nums.size()==0){
            return nums.size();
        }
         int j = 0; 
        int n=nums.size();
    // Doing same as done in Method 1 
    // Just maintaining another updated index i.e. j 
    for (int i=0; i < n-1; i++) 
        if (nums[i] != nums[i+1]) 
            nums[j++] = nums[i]; 
  
    nums[j++] = nums[n-1]; 
  
    return j; 
    }
};