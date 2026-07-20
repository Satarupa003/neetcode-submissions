class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>>all;
        for(int i =0; i<nums.size(); i++){
            set<int>st;
            for(int j =i+1; j<nums.size(); j++){
                int diff = -(nums[i]+nums[j]);
                if(st.find(diff) != st.end()) {
                    vector<int>temp = {nums[i], nums[j], diff};
                    sort(temp.begin(), temp.end());
                    all.insert(temp);
                }
                else st.insert(nums[j]);
            }
        }
        vector<vector<int>>ans(all.begin(), all.end());
        return ans;
    }
};
