#include <iostream>
#include <vector>
#include <unordered_set>

bool hasDuplicate(std::vector<int>& nums){

	std::unordered_set<int> tmp;

	for (size_t i = 0; i < nums.size(); ++i){
		if (tmp.find(nums[i]) != tmp.end())
			return (true);
		tmp.insert(nums[i]);
	}
	return (false);
}

// int	main(){
// 	std::vector<int> vct;
// 	vct.push_back(0);
// 	vct.push_back(1);
// 	vct.push_back(3);
// 	vct.push_back(3);
// 	if (hasDuplicate(vct))
// 		std::cout << "true" << std::endl;
// 	else
// 		std::cout << "false" << std::endl;
// }
