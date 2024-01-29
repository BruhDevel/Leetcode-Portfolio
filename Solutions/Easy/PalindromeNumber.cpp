class Solution {
public:
 bool isPalindrome(int x) {
	bool Value = true;
	string X = std::to_string(x);
	string X2 = X;
	std::reverse(X2.begin(), X2.end());
	if (X != X2) {
		Value = false;
	}
	return Value;
}
};
