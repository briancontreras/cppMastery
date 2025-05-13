#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;


class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        std::unordered_set<int> arr;

        for(int i = 0; i < nums.size();i++){
            if(arr.count(nums[i])>0){
                return true;
            }
            else{
                arr.insert(nums[i]);
            }
        }
        return false;
    
    }
};