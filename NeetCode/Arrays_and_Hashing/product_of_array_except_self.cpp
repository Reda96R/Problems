# include <vector>
# include <iostream>

std::vector<int>	productExceptSelf( std::vector<int>& nums ){
	std::vector<int>	ret(nums.size());

	int	  prefix = 1;
	for (size_t i = 0; i < nums.size(); ++i){
		ret[i] = prefix;
		prefix *= nums[i];
	}
	
	int	  suffix = 1;
	for (int i = nums.size() - 1; i >= 0; --i){
		ret[i] *= suffix;
		suffix *= nums[i];
	}
	return (ret);
}

// int	  main(){
// 	std::vector<int> tmp = {1, 2, 3, 4};
// 	tmp = productExceptSelf(tmp);
// 	for (size_t i = 0; i < tmp.size(); ++i){
// 		std::cout << tmp[i] << std::endl;
// 	}
// }
