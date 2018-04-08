//
// Created by Bourne on 08/04/2018.
//

#include <set>
#include <map>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> s1;
        set<int> rs;
        for(auto num : nums1) {
            s1.insert(num);
        }

        for(auto num : nums2) {
            if(s1.find(num) != s1.end()) {
                rs.insert(num);
            }
        }

        vector<int> res{rs.begin(), rs.end()};
        return res;
    }
};