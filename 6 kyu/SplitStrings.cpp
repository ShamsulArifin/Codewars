// Complete the solution so that it splits the string into pairs of two characters. If the string contains an odd number of characters then it should replace the missing second character of the final pair with an underscore ('_').

// Examples:

// * 'abc' =>  ['ab', 'c_']
// * 'abcdef' => ['ab', 'cd', 'ef']

#include <string>
#include <vector>

std::vector<std::string> solution(const std::string &s)
{
	std::vector<std::string> result;

	for (size_t i = 0; i < s.length(); i += 2)
		if (i + 1 < s.length())
		{
			result.push_back(s.substr(i, 2));
		}
		else
		{
			result.push_back(s.substr(i, 1) + "_");
		}
	return result; // Your code here
}

