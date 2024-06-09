#include <algorithm>
#include <iostream>

bool	isAnagram( std::string s, std::string t){
	std::sort(s.begin(), s.end());
	std::sort(t.begin(), t.end());
	return (s == t);
}

// int	  main( void ){
//
// 	if (isAnagram("racecar", "carrace"))
// 		std::cout << "true" << std::endl;
// 	else
// 		std::cout << "false" << std::endl;
// }


//NOTE:
//there's another solution which sites to implement a map containing a character as key
//and its frequency in the string, we count the frequency of characters in the first string
//then we decrement that same count while looping over the second string, last we check if any
//character has non-zero frequency (meaning it exists in only one of the strings)
