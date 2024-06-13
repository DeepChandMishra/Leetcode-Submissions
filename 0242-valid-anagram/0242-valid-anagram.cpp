class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }

        // Use unordered maps to count character frequencies
        unordered_map<char, int> countS, countT;

        // Count characters in string s
        for (char c : s) {
            countS[c]++;
        }

        // Count characters in string t
        for (char c : t) {
            countT[c]++;
        }

        // Compare character counts
        for (auto &entry : countS) {
            if (countT[entry.first] != entry.second) {
                return false;
            }
        }

        return true;
    }
};