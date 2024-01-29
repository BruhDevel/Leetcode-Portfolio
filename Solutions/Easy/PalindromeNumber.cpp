class Solution {
public:
 bool isPalindrome(int x) {
	bool Value = true;
	string X = "";
	string X2 = "";
	for (char a : std::to_string(x)) {
		X +=a;
	}
	X2 = X;
	std::reverse(X2.begin(), X2.end());
	if (X != X2) {
		Value = false;
	}
	return Value;
}
};
