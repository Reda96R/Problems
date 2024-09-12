# include <cstddef>
# include <unordered_map>
# include <utility>
# include <vector>
# include <algorithm>
# include <iostream>

std::vector<int> topKFrequent( std::vector<int>& nums, int k ) {
	std::unordered_map<int, int>		map;
	std::vector<int>					ret;
	std::vector<std::pair<int, int>>	tmp;

	for (size_t i = 0; i < nums.size(); ++i)
		map[nums[i]]++;

	std::unordered_map<int, int>::iterator	it;
	for (it = map.begin(); it != map.end(); ++it){
		tmp.emplace_back(it->second, it->first);
	}
	std::sort(tmp.begin(), tmp.end());

	std::vector<std::pair<int, int>>::reverse_iterator	ite;
	for (ite = tmp.rbegin(); ite != tmp.rend(); ++ite){
		ret.push_back(ite->second);
		if (!k)
			break;
		--k;
	}
	return (ret);
}

// int main(){
// 	std::vector<int> vect = {1, 2, 2, 4, 4, 4};
// 	std::vector<int> ret = topKFrequent(vect, 2);
// 	for (size_t i = 0; i < ret.size(); ++i){
// 		std::cout << ret[i] << std::endl;
// 	}
// }
