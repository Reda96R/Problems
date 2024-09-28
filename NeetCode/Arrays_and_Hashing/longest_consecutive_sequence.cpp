# include <iostream>
# include <vector>
# include <unordered_set>

int	  longestConsecutive( std::vector<int>& nums ){
	std::unordered_set<int> numsSet(nums.begin(), nums.end());
	std::unordered_set<int>::iterator it;
	int	  ret = 0;

	for (it = numsSet.begin(); it != numsSet.end(); ++it){
		if (numsSet.find(*it - 1) == numsSet.end()){
			int	  l = 1;
			while (numsSet.find(*it + l) != numsSet.end())
				l++;
			ret = std::max(ret, l);
		}
	}
	return (ret);
}

int	  main(){
	std::vector<int> vect = {100,4,200,1,3,2};
	std::cout << longestConsecutive(vect) << std::endl;
}
