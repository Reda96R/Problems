# include <iostream>
# include <vector>
# include <stack>
# include <ctype.h>
# include <stdlib.h>

int evalRPN(std::vector<std::string>& tokens ){
	std::stack<int> ops;
	for (int i = 0; i < tokens.size(); ++i){
		if (tokens[i].length() == 1 && !isdigit(tokens[i][0])){
			int b = ops.top();
			ops.pop();
			int a = ops.top();
			ops.pop();
			if (tokens[i] == "+"){
				ops.push(a + b);
			}
			else if (tokens[i] == "-"){
				ops.push(a - b);
			}
			else if (tokens[i] == "*"){
				ops.push(a * b);
			}
			else if (tokens[i] == "/"){
				ops.push(a / b);
			}
		}
		else{
			ops.push(std::stoi(tokens[i]));
		}
	}
	return (ops.top());
}

// int	main(){
// 	std::vector<std::string> vect = {"2","1","+","3","*"}; // 9
// 	std::vector<std::string> vect = {"10","6","9","3","+","-11","*","/","*","17","+","5","+"}; // 22
// 	std::cout << evalRPN(vect) << std::endl;
// }
