class Solution {
public:
int searchInsert(vector<int>& nums, int target) {
	int maxN = 0;
	int minN = 1000000;
	for (int i = 0; i < nums.size(); i++) {
		if (nums[i] > maxN) {
			maxN = nums[i];
		}
		if (nums[i] < minN) {
			minN = nums[i];
		}

		if (nums[i] == target) {
			return i;
		}

	}
	for (int i = 0; i < nums.size(); i++) {
	
		if (nums[i] >= target) {
			return i ;
		}
	}
	if (target > maxN) {
		return nums.size();
	}
	if (target < minN) {
		return 0;
	}
	return -1;
}
};
