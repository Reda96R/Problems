# include<vector>
# include <iostream>

int	  maxArea( std::vector<int>& height ){
	int	  l = 0;
	int	  r = height.size() - 1;
	int	  area = 0;

	while(r >=0 && l <= height.size() - 1){
		int	  minHeight = height[l] < height[r] ? height[l] : height[r];
		area = minHeight * (r - l) > area ? minHeight * (r - l) : area;
		height[l] < height[r] ? l++ : r--;
	}
	return (area);
}

int	  main(){
	std::vector<int> vect = {1,8,6,2,5,4,8,3,7};
	std::cout << maxArea(vect) << std::endl;
}
