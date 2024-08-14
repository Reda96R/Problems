#include <iostream>
#include <vector>

// the first element is always unique so we start from 1, j is the place for the new unique
// element and i is the currently selected element that will be compared with the previous,
// if the element is not duplicated then move it to j.

int	  removeDuplicates( std::vector<int>& nums ){
	int	  j = 1;
	for(int i = 1; i < nums.size(); ++i){
		if (nums[i] != nums[i - 1]){
			nums[j] = nums[i];
			++j;
		}
	}
	return (j);
}
