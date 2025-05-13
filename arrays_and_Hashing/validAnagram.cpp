
#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) {
            return false;
        }
        int i,j;
        vector<int> v(26, 0);
        for(i=0; i<s.size(); i++) {
            j = s[i]-'a';
            v[j]++;
            j = t[i]-'a';
            v[j]--;
        }
        for(i=0; i<26; i++) {
            if(v[i] != 0) {
                return false;
            }
        }
        return true;
    }
};