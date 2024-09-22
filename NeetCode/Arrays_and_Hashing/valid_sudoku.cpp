# include <iostream>
# include <unordered_map>
# include <unordered_set>
# include <vector>

bool	isValidSudoku( std::vector<std::vector<char>>& board ){

	std::unordered_map<int, std::unordered_set<char>> c;
	std::unordered_map<int, std::unordered_set<char>> r;
	std::unordered_map<int, std::unordered_set<char>> boxes;

	for (int i = 0; i < 9; ++i){
		for(int j = 0; j < 9; ++j){
			if (board[i][j] == '.'){
				continue ;
			}
			if (r[i].count(board[i][j]) || c[j].count(board[i][j]) || boxes[(i / 3) * 3 + (j / 3)].count(board[i][j]))
				return (false);
			r[i].insert(board[i][j]);
			c[j].insert(board[i][j]);
			boxes[(i / 3) * 3 + (j / 3)].insert(board[i][j]);
		}
	}
	return (true);
}
