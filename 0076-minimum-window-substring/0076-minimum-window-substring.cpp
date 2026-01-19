class Solution {
public:
    string minWindow(string s, string t) {

        if (s.size() < t.size()) return "";

        vector<int> freq(128, 0);

        // Step 1: store frequency of t
        for (char c : t) freq[c]++;

        int left = 0, right = 0;
        int count = t.size();      // total chars needed
        int minLen = INT_MAX;
        int start = 0;

        // Step 2: sliding window
        while (right < s.size()) {

            // If char is needed, decrease count
            if (freq[s[right]] > 0)
                count--;

            // Reduce frequency (can go negative)
            freq[s[right]]--;
            right++;

            // Step 3: valid window found
            while (count == 0) {

                if (right - left < minLen) {
                    minLen = right - left;
                    start = left;
                }

                // Try to shrink window
                freq[s[left]]++;

                if (freq[s[left]] > 0)
                    count++;

                left++;
            }
        }

        return minLen == INT_MAX ? "" : s.substr(start, minLen);
    }
};
