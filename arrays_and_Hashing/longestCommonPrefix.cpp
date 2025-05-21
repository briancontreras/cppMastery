class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        //This will work as the stringbuilder for the c++ language
        string answer = "";

        //This will go through the entire first string
        for(int i = 0; i < strs[0].size();i++){
            //This will go through the indexes of all the strings
            for(int j = 0; j < strs.size();j++){
                if(i >= strs[j].size() or strs[0][i] != strs[j][i]){
                    return answer;
                }
            }
            answer.push_back(strs[0][i]);
        }
        return answer;
        
    }
};