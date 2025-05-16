#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;


int main(){
    vector<int> nums = {1,1,1,3,3,4,3,2,4,2};
        std::unordered_set<int> arr;

        for(int i = 0; i < nums.size();i++){
            if(arr.count(nums[i])>0){
                cout<<"True";
            }
            else{
                arr.insert(nums[i]);
            }
        }
        cout<<"False";
    return 0;
}