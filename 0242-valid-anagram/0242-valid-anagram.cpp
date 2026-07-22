class Solution {
public:
    bool isAnagram(string s, string t) {

        unordered_map<char, int> mpp;

        if (s.size() == t.size()) {
            for (int i = 0; i < s.length(); i++) {
                mpp[s[i]]++;
                mpp[t[i]]--;

                }

                
                for (auto& pair : mpp) {
                    if (pair.second != 0) {
                        return false;
                    }
            }
        }else {
            return false ;
        }

        return true ;
    }
    };