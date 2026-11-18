class Solution {
public:
    void reverseStringg(vector<char>& st, int start, int end) {
        if (start >= end)
            return;
        swap(st[start], st[end]);
        reverseStringg(st, start + 1, end - 1);
        return;
    }
    void reverseString(vector<char>& s) {
        int start = 0;
        int end = s.size() - 1;
        reverseStringg(s, start, end);
    }
};
