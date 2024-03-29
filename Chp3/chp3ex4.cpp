
#include<iostream>
#include<string>


using std::cin;	    using std::vector;
using std::cout;	using std::string;
using std::endl;	using std::streamsize;

int main() {

	cout << "Enter all worlds followed bt EOF: ";
	size_t max = 0;
	size_t min = 0;

	string word;

	while (cin >> word) {
		//초기화
		if (min.size() == 0) min = word;
		if (max.size() == 0) max = word;

		//크기 확인
		if (word.size() < min.size()) min = word;
		else if(word.size() > max.size()) max = word
	}

	cout << "max: " << max;
	cout << "Min: " << min;
	cout << "Words : " << words.size();
	return 0;
}