class Solution {
public:
int removeElement(vector<int>& nums, int val) {
	vector<int> result = {};
	for (int i : nums) {
		if (i != val) {
			result.push_back(i);
		}
	}
	int index = 0;
	for (int i : result) {
		nums[index] = result[index];
		index++;
	}
	return result.size();
}
};
