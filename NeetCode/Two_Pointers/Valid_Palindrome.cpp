#include <cctype>
# include <iostream>
# include <vector>

bool	isPalindrome( std::string s ){
	std::string	  s1;
	std::string	  s2;

	for (size_t i = 0; i < s.size(); ++i){
		if (isalnum(s[i]))
			s1.push_back(tolower(s[i])); 
	}
	for (int i = s.size(); i >= 0; --i){
		if (i && isalnum(s[i - 1]))
			s2.push_back(tolower(s[i - 1])); 
	}
	if (!s1.compare(s2))
		return (true);
	return (false);

}

// int	main(){
// 	std::string s = "Was it a car or a cat I saw?";
// 	std::cout << isPalindrome(s) << std::endl;
// }
