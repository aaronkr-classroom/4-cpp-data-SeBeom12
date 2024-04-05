// chp3ex0.cpp
// 중간고사, 기말고사, 그리고 과제 점수 몇개를 받고
// 마지막 평균 결과 점수를 계산하기.

#include <ios>
#include <iomanip>
#include <iostream>
#include <stdexcept>
#include <string>
#include <algorithm>
#include <vector>
using std::domain_error;


using std::cin;	using std::setprecision; // 실수 숫자 길이 정의
using std::cout; using std::string;
using std::endl; using std::streamsize;
using std::sort; using std::vector;
using std::domain_error; using std::istream;


//중간 시험 점수, 기말시험점수, 종합과제점수에서 학생의 종합점수를 가함

double grade(double mt, double ft, double hw) {
	return 0.2 * mt + 0.4 * ft + 0.4 * hw;
}

//vector<double>의 중앙값을 구함
//함수를 호출하면 인수로 제공된 벡터를 통째로 복사
double median(vector<double> vec) {
	typedef vector <double>::size_type vec_sz;
	vec_sz size = vec.size();
	if (size == 0) {
		throw domain_error("Median of empty vector");
	}

	//점수를 정렬
	sort(vec.begin(), vec.end());

	//과제 점수의 중앙값을 구함
	vec_sz mid = size / 2;
	return size % 2 == 0
		? (vec[mid] + vec[mid - 1]) / 2 : vec[mid];

	//입력 스틀미에서 과제 점수를 읽어서 vector<double>에 넣음
}

istream& read_hw(istream&in, vector<double>&hw){
		if (in) {
			//이전 내용을 제거
			hw.clear();

			//과제 점수를 읽음

			double x;

			while (in >> x) {
				hw.push_back(x);
			}

			//다음 학생의 점수 입력 작업을 고려해 스트림을 지움
			in.clear();

			return in;
	}
}

double grade(double mt, double ft, double hw) {
	return 0.2 * mt + 0.4 * ft + 0.4 * hw;
}

double grade(double mt, double ft, const vector<double>& hw) {
	if (hw.size() == 0)
		throw domain_error("No homework!");

	return grade(mt, ft, median(hw));
}
int main() {

		// 학생의 이름을 묻고 입력받기
		cout << "Your name: ";
	string name;
	cin >> name;
	cout << "Hello, " << name << "!" << endl;


	// 중간고사와 기말고사 점수를 묻고 입력받기
	cout << "Midterm & Final scores: ";
	double midterm, final; // double = 최소 10자리까지, 보통 15자리까지
	cin >> midterm >> final;

	// 과제 점수를 물음
	cout << "Enter all homework grades "
		"followed by EOF: "; // End-Of-File

	vector <double> homework;

	//과제 점수를 읽음
	read_hw(cin, homework);
	// 입력을 위한 변수




	//종합 점수를 계산해 생성
	try {
		double final_grade = grade(midterm, final, homework);
		// 결과를 출력
		streamsize prec = cout.precision(); // 지금 cout precision
		cout << "Final grade: " << setprecision(3)
		<< final_grade << setprecision(prec) << endl;

	}
	catch (domain_error) {
		cout << endl << "No grades entered. Try again" << endl;
		return 1;
		}

	return 0;
} // main 끝
