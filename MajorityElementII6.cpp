class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int,int>temp;
        vector<int>ans;
        int m = nums.size() / 3 ;
        for( auto i : nums ){
            temp[i]++;
        }
        for( auto i : temp ){
            if( i.second > m ){
                ans.push_back(i.first);
            }
        }
        return ans;
    }
};
