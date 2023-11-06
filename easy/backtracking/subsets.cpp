class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        result.push_back({});

        for(int i : nums) {
            int size = result.size();
            for(int j=0; j<size; j++) {
                vector<int> tmp = result[j];
                tmp.push_back(i);
                result.push_back(tmp);
            }
        }

        return result;
    }
};
