#include <vector>
#include <iostream>
// class Solution {
// public:
//     int removeElement(std::vector<int>& nums, int val) {
// 		int	k = 0;
// 		while (nums[k])
// 			k++;
// 		int	i = 0;
// 		int	tmp;
// 		while (i < k){
// 			if (nums[i] == val){
// 				tmp = nums[k];
// 				nums[k] = nums[i];
// 				nums[i] = k;
// 				k--;
// 			}
// 			else
// 				i++;
// 		}
// 		return (i + 1);
//     }
// };

int removeElement(std::vector<int>& nums, int val) {
	int k = nums.size() - 1;
	int	i = 0;
	int	tmp;
	while (i < k){
		if (nums[i] == val){
			tmp = nums[k];
			nums[k] = nums[i];
			nums[i] = k;
			std::cout << "k--> " << k << std::endl;
			k--;
		}
		else
			i++;
	}
	std::cout << "i--> " << i << std::endl;
	return (i);
}

int	  main(){
	std::vector<int> nums;
	nums.push_back(3);
	nums.push_back(2);
	nums.push_back(3);
	nums.push_back(3);
	removeElement(nums, 3);
	// std::cout << removeElement(nums, 3) << std::endl;
}
// [3, 2, 2, 3]
// 3
