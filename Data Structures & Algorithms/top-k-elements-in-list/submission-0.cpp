class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> count;
        for(auto num : nums){
            count[num]++;
        }
        vector<pair<int, int>>arr;
        for(auto r : count){
            arr.push_back({r.second, r.first});
        }
        sort(arr.begin(), arr.end(), greater<pair<int, int>>());
        vector<int>ans;
        for(int i=0; i<k; i++){
            ans.push_back(arr[i].second);
        }
        return ans;
    }
};
