class Solution {
public:
   bool isPalindrome(string s) {
	bool Value = true;
	string X = "";
	for (char c : s) {
		if (!isspace(c) && isalnum(c) ) {
			X += std::tolower(c);
		}
	}
	string X2 = X;
	std::reverse(X2.begin(), X2.end());
	if (X != X2) {
		Value = false;
	}
	return Value;
}
};
