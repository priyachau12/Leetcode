class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int n1 = s1.length();
        
        if (s1 == s2) {
            return true;
        }

        int count = 0;
        vector<int> mismatchIndices;
        
        for (int i = 0; i < n1; i++) {
            if (s1[i] != s2[i]) {
                mismatchIndices.push_back(i);
            }
        }

        if (mismatchIndices.size() == 2) {
            int i = mismatchIndices[0], j = mismatchIndices[1];
            swap(s2[i], s2[j]);  // Perform the swap
            return s1 == s2;
        }

        return false;
    }
};
