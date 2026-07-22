unordered_map<int,int> freq;

class Solution {
public:
    static bool compare(int a, int b) {   // ← static laga diya
        if (freq[a] != freq[b]) {
            return freq[a] < freq[b];
        }
        return a > b;
    }

    vector<int> frequencySort(vector<int>& nums) {
        freq.clear();
        for (auto n : nums) freq[n]++;
        sort(nums.begin(), nums.end(), compare);
        return nums;
    }
};