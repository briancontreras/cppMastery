#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    map<int,int> vals;

    for (int i = 0; i < nums.size(); i++) {
        int diff = target - nums[i];

        if (vals.find(diff) != vals.end()) {
            vector<int> answer;
            answer.push_back(vals[diff]);
            answer.push_back(i);

            cout << "True: [" << answer[0] << ", " << answer[1] << "]" << endl;
            return 0;
        } else {
            vals[nums[i]] = i;
        }
    }

    cout << "False" << endl;
    return 0;
}