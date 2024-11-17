# include<iostream>
# include <stack>
# include <vector>

std::vector<int>	dailyTemperatures( std::vector<int>& temperatures ){
	std::stack<int>	  monotonicStack;
	std::vector<int>  ret(temperatures.size());

	for (int i = temperatures.size() - 1; i >= 0; --i){
		if (monotonicStack.empty()){
			monotonicStack.push(i);
			ret[i] = 0;
			continue ;
		}
		while(!monotonicStack.empty() && temperatures[monotonicStack.top()] <= temperatures[i]){
			monotonicStack.pop();
		}
		if (monotonicStack.empty()){
			monotonicStack.push(i);
			ret[i] = 0;
		}
		else{
			ret[i] = monotonicStack.top() - i;
			monotonicStack.push(i);
		}
	}
	return (ret);
}

// int	  main(){
// 	std::vector<int> vect = {30,40,50,60};
// 	std::vector<int> vect = {73,74,75,71,69,72,76,73};
// 	std::vector<int> ret = dailyTemperatures(vect);
// 	for (int i = 0; i < ret.size(); ++i){
// 		std::cout << ret[i] << std::endl;
// 	}
// }
