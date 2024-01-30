class Solution {
public:
   int strStr(string haystack, string needle) {
    for (int i = 0; i <= haystack.size(); i++) {
        for (int i2 = 0; i2 <= haystack.size(); i2++) {
            if (haystack.substr(i, i2) == needle) {
                return i;
            }
        }
    }
    return -1;
}
};
