# include <algorithm>
# include <vector>
# include <map>
# include <iostream>

std::vector<std::vector<std::string>>	groupAnagrams( std::vector<std::string>& strs ){

	std::map<std::string, std::vector<std::string>> wmap;
	std::vector<std::vector<std::string>> ret;

	for (size_t i = 0; i < strs.size(); ++i){
		std::string	  word = strs[i];
		std::sort(word.begin(), word.end());
		wmap[word].push_back(strs[i]);
	}
	std::map<std::string, std::vector<std::string>>::iterator it;
	for (it = wmap.begin(); it != wmap.end(); ++it){
		ret.push_back(it->second);
	}

	return (ret);
}

// int	  main(){
// 	std::vector<std::string> strs = {"act", "pots", "cat", "stop"};
// 	groupAnagrams(strs);
// }
