class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int size = nums.size();
        int n2 = nums.size() * 2;
        vector<int> ans;

        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < size; j++) {
                ans.push_back(nums[j]);
                cout << nums[j] << '\n';
            }
        }
        return ans;
    }
};