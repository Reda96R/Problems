# include<vector>

std::vector<int>  twoSum( std::vector<int>& numbers, int target ){
	std::vector<int>  ret;
	int	  l = 0;
	int	  r = numbers.size() - 1;

	while (r >= 0 && l <= numbers.size() - 1){
		if (numbers[l] + numbers[r] < target)
			l++;
		else if (numbers[l] + numbers[r] > target)
			r--;
		else {
			ret.push_back(l + 1);
			ret.push_back(r + 1);
			break ;
		}
	}
	return (ret);
}

// NOTE: This solution works but it exceeds the time limit
// #include <iterator>
// # include<vector>
// # include<iostream>
// // # include<unordered_set>
// # include<algorithm>
//
// std::vector<int>  twoSum( std::vector<int>& numbers, int target ){
// 	std::vector<int>::iterator  it;
// 	std::vector<int>  ret;
// 	int				  j;
//
// 	for(int i = 0; i < numbers.size(); ++i){
// 		it = std::find(numbers.begin(), numbers.end(), target - numbers[i]);
// 		if (it != numbers.end()){
// 			j = std::distance(numbers.begin(), it) + 1;
// 			if (i + 1 != j){
// 				if (i + 1 < j){
// 					ret.push_back(i + 1);
// 					ret.push_back(j);
// 				}
// 				else{
// 					ret.push_back(j);
// 					ret.push_back(i + 1);
// 				}
// 				break ;
// 			}
// 		}
// 	}
// 	return (ret);
// }

# include<iostream>
// int	main(){
// 	std::vector<int> vect = {2, 3, 4};
// 	std::vector<int> ret = twoSum(vect, 6);
// 	for (int i = 0; i < ret.size(); ++i){
// 		std::cout << ret[i] << std::endl;
// 	}
// }
