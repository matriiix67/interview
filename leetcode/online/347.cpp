
#include <set>
#include <unordered_map>
#include <queue>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> um;
        for (auto num : nums) ++um[num];

        priority_queue<pair<int, int>> q;
        for(auto it : um) {
            q.push({it.second, it.first});
        }

        vector<int> res;
        for(int i = 0; i < k; ++i) {
            res.push_back(q.top().second);
            q.pop();
        }
        return res;
    }
};