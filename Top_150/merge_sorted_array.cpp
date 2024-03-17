class Solution {
public:
	/*
		We need to compare the last elements of nums1 and nums2 and place the bigger
		at nums1[insex] while decreasing the index and the index of the array with
		the bigger element
	*/
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
		int	  index = (m + n) - 1;
		int	  n1 = m - 1;
		int	  n2 = n - 1;

		while (n2 >= 0){
			if (n1 >= 0 && nums1[n1] >= nums2[n2])
				nums1[index--] = nums1[n1--];
			else
				nums1[index--] = nums2[n2--];
		}
	}
};

