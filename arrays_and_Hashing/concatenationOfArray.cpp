
#include <iostream>
#include <vector>

using namespace std;

int main(){
vector<int> nums = {1,2,1};

vector<int> answer(nums.size()*2);
int size = nums.size();

for(int i = 0; i < size; i++){
    answer[i] = nums[i];
    answer[i+size] = nums[i];
}
cout<<"True";
return 0;

}

