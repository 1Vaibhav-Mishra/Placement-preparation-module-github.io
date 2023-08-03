class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int l = 0;
        int n = nums.size();
        int r = n - 1;
        int mid = l + (r - l) / 2;

        // If the mid index is odd, check these:
            // If the index on the left is similar, then the number is on the right. Move left to mid + 1
            // Else if the index on right is similar, then the number is on the left. Move right to mid
            // Else, return the number at mid
        // If the mid index is even, check these:
            // If the index on the left is similar, then the number is on the left. Move right to mid
            // Else if the index on right is similar, then the number is on the right. Move left to mid + 1
            // Else, return the number at mid 
        while (l < r) {
            if (mid % 2) {
                if (mid - 1 >= 0 && nums[mid] == nums[mid - 1]) l = mid + 1;
                else if (mid + 1 < n && nums[mid] == nums[mid + 1]) r = mid;
                else return nums[mid];
            }
            else {
                if (mid - 1 >= 0 && nums[mid] == nums[mid - 1]) r = mid;
                else if (mid + 1 < n && nums[mid] == nums[mid + 1]) l = mid + 1;
                else return nums[mid];
            }
            mid = l + (r - l) / 2;
        }

        return nums[mid];
    }
};