# include<vector>
# include<iostream>

int	trap( std::vector<int>& height ){

	std::vector<int>	boundaries;
	int	  ret = 0;

	int	maxl = 0;
	int	maxr = 0;

	for (int i = 0; i < height.size(); ++i){
		if (height[i] > height[maxr])
			maxr = i;
	}
	for (int i = 0; i < height.size(); ++i){
		if (height[i] > height[maxl])
			maxl = i;
		if (height[i] > height[maxr] && i <= maxr)
			maxr = i;
		if (i > maxr){
			maxr = i;
			for (int j = i; j < height.size(); ++j){
				if (height[j] > height[maxr])
					maxr = j;
			}
		}
		height[maxl] > height[maxr] ? boundaries.push_back(height[maxr]) : boundaries.push_back(height[maxl]);
		boundaries[i] -= height[i];
		ret += boundaries[i];
	}
	return (ret);
}

int	main(){
	std::vector<int>	vect = {0,1,0,2,1,0,1,3,2,1,2,1};
	std::cout << trap(vect) << std::endl;
}
