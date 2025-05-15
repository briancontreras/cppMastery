
#include <iostream>
#include <vector>
#include <map>

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>> lists;

        for(int i = 0; i < strs.size();i++){
            string temp = strs[i];
            sort(temp.begin(),temp.end());
            
            if(lists.find(temp)==lists.end()){
                vector<string> curr = {strs[i]};
                lists[temp]=curr;
            }
            else{
                lists[temp].push_back(strs[i]);
            }
        }
        vector<vector<string>> answer;
        for (const auto& pair : lists) {
            answer.push_back(pair.second);
        }
        return answer;
    }
};