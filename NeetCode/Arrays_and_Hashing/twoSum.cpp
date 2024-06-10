# include <iostream>
# include <unordered_map>
# include <vector>
# include <algorithm>

// Brute force
// std::vector<int>  twoSum( std::vector<int>& nums, int target ){
// 	std::vector<int> ret;
// 	if (nums.size() == 2){
// 		ret.push_back(0);
// 		ret.push_back(1);
// 		return (ret);
// 	}
// 	for (size_t i = 0; i < nums.size(); ++i){
// 		int x = target - nums.at(i);
// 		for (size_t j = 0; j < nums.size(); ++j){
// 			if (x == nums[j]){
// 				if (i != j){
// 					ret.push_back(i);
// 					ret.push_back(j);
// 					return (ret);
// 				}
// 			}
// 		}
// 	}
// 	return (ret);
// }

// Hash map
std::vector<int>  twoSum( std::vector<int>& nums, int target ){

	std::unordered_map<int, int>  numbers;

	for (size_t i = 0; i < nums.size(); ++i){
		int	  x = target - nums[i];
		if (numbers.find(x) == numbers.end())
			numbers[nums[i]] = i;
		else {
			return {numbers[x], (int)i};
		}
	}
	return {};
}

// int	main( void ){
// 	std::vector<int> nums;
// 	nums.push_back(3);
// 	nums.push_back(4);
// 	nums.push_back(5);
// 	nums.push_back(6);
// 	std::vector<int> ret = twoSum(nums, 7);
// 	for (size_t i = 0; i < ret.size(); ++i)
// 		std::cout << ret[i] << std::endl;
// }
