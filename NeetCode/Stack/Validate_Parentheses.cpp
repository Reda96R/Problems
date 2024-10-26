# include<iostream>
# include<stack>
# include<unordered_map>

bool	isValid( std::string s ){

	std::unordered_map<char, char>	  bracketsMap = {
		{')', '('},
		{'}', '{'},
		{']', '['},
	};

	std::stack<char> openings;

	for (int i = 0; i < s.size(); ++i){
		if (bracketsMap.find(s[i]) != bracketsMap.end()){
			if (openings.empty() || bracketsMap[s[i]] != openings.top()){
				return (false);
			}
			openings.pop();
		}
		else{
			openings.push(s[i]);
		}
	}
	return (openings.empty());
}

// int	  main(){
// 	std::cout << isValid("()") << std::endl;
// }
