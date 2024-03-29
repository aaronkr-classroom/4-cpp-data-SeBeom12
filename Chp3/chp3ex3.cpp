
//chp3ex3

#include <iostream>
#include <map>
#include<string>
#include<sstream>

int main() {
	std::string input;

	std::getline(std::cin, input);

	std::istringstream iss(input); 
	std::string word;
	std::map<std::string, int> wordCount;

	while (iss >> word) {

		++wordCount[word];

	}
	
	for (const auto& pair : wordCount) {
		std::cout << pair.first << ":" << pair.second << std::endl;
	}

	return 0;





}

