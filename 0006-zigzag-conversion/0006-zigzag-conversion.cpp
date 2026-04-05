class Solution {
public:
    string convert(string s, int numRows) {
        // No zigzag needed in these edge cases.
        if (numRows == 1 || numRows >= (int)s.size()) {
            return s;
        }

        int idx = 0;  // current row
        int d = 1;    // direction: +1 down, -1 up

        // 2D-style row container: each row stores its characters.
        vector<vector<char>> rows(numRows);

        for (char c : s) {
            // Put current character into current row.
            rows[idx].push_back(c);

            // At top row, we must start moving downward.
            if (idx == 0) {
                d = 1;
            }
            // At bottom row, we must start moving upward.
            else if (idx == numRows - 1) {
                d = -1;
            }

            // Move row index for next character.
            idx += d;
        }

        // Final string is built by reading row 0, row 1, ... row numRows-1.
        string result;
        result.reserve(s.size());
        for (const auto& row : rows) {
            for (char c : row) {
                result += c;
            }
        }

        return result;
    }
};