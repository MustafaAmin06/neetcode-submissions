class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        deque<int> right;
        vector<int> left;
        vector<int> result;
        int prod = 1;
        for (int i = static_cast<int>(nums.size()) - 1; i >= 0; i--) {
            right.push_front(prod);
            prod *= nums.at(i);
        }
        prod = 1;
        for(int i = 0; i < nums.size(); i++){
            left.push_back(prod);
            prod *= nums.at(i);
        }
        for(int i = 0; i < nums.size(); i++){
            result.push_back(right.at(i) * left.at(i));
        }
        return result;
    }
};
