# include <vector>
# include <iostream>
# include <set>
# include <algorithm>

//TODO: need to register l and r and check for duplicates

std::vector<std::vector<int>> threeSum( std::vector<int>& nums ){
	std::vector<std::vector<int>>	ret;
	std::set<std::vector<int>>			s;

	std::sort(nums.begin(), nums.end());
	for (int f = 0; f < nums.size(); ++f){
		int	l = f + 1;
		int	r = nums.size() - 1;
			while (l < r){
				int	t = nums[f] + nums[l] + nums[r];
				if (nums[l] + nums[r] == t){
					s.insert({nums[f], nums[l], nums[r]});
					l++;
					r--;
				}
				else if (nums[l] + nums[r] < t)
					l++;
				else
					r--;
			}
	}

	std::set<std::vector<int>>::iterator  it;

	for (it = s.begin(); it != s.end(); ++it){
		ret.push_back(*it);
	}
	return (ret);
}

// int	  main(){
// 	std::vector<int> vect = {-1, 0, 1, 2, -1, -4};
// 	// std::vector<int> vect = { 1, 2, -2, -1};
// 	std::vector<std::vector<int>> ret = threeSum(vect);
// 	for (int i = 0; i < ret.size(); ++i){
// 		for (int j = 0; j < ret[i].size(); ++j){
// 			std::cout << ret[i][j] << std::endl;
// 		}
// 	}
// }
