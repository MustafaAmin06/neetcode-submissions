class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> map;
        vector<vector<int>> bucket(nums.size() + 1);
        vector<int> result;
        for(int num : nums){
            map[num]++;
        }
        for(auto [key, value] : map){
            bucket[value].push_back(key);
        }
        int g = k;
        for (int i = static_cast<int>(bucket.size()) - 1; i > 0; i--) {
            for (int num : bucket[i]) {
            result.push_back(num);
            if (result.size() == k) {
                return result;
            }
        }
    }
    }
};
