#include <algoritm>
#include <ios>
#include<iomanip>
#include<iostream>
#include<string>
#include<vector>

using std::cin;	    using std::vector;
using std::cout;	using std::string;
using std::endl;	using std::streamsize;

int main() {

	cout << "Enter all worlds followed bt EOF: "; 
	vector<string> words;

	string word

		while (cin >> word) {
			words.push_back(word);
		}

		cout << "Words : " << words.size();
		return 0;
}