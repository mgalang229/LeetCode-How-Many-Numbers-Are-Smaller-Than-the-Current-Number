class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n);
        for (int i = 0; i < n; i++) {
            int cnt = 0;
            for (int j = 0; j < n; j++) {
                cnt += (nums[j] < nums[i] && j != i);
            }
            res[i] = cnt;
        }
        return res;
    }
};
