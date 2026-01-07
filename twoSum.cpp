//two sum problem with multiple solution

// Worst case
#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int len = nums.size();
        for (int a=0; a<len; a++){
            int x = target-nums[a];
            for (int b=0; b<len; b++){
                if (nums[b]==x){
                    return {a, b};
                }
            }
        }
        return {};
    }
};

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    Solution sol;
    vector<int> res = sol.twoSum(nums, target);
    cout << res[0] << " " << res[1] << endl;
}

//tc = O(n^2)


