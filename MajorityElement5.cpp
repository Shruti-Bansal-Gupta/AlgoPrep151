class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        int count = 1 , ans = nums[0] , n = nums.size();
        for(int i = 1; i<n ; i++){
            if(ans==nums[i])
                ++count;
            if(count > (n/2))
                return ans;
            else 
                ans = nums[i];
        }
      return 1;  
    }
};
