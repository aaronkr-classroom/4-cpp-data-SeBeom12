// chp3ex0.cpp
// �߰����, �⸻���, �׸��� ���� ���� ��� �ް�
// ������ ��� ��� ������ ����ϱ�.

#include <ios>
#include <iomanip>
#include <iostream>
#include <string>
#include <algoritm>
#include <vector>

using std::cin;	using std::setprecision; // �Ǽ� ���� ���� ����
using std::cout; using std::string;
using std::endl; using std::streamsize;

int main() {
	int vector
	
	// �л��� �̸��� ���� �Է¹ޱ�
	cout << "Your name: ";
	string name;
	cin >> name;
	cout << "Hello, " << name << "!" << endl;


	// �߰����� �⸻��� ������ ���� �Է¹ޱ�
	cout << "Midterm & Final scores: ";
	double midterm, final; // double = �ּ� 10�ڸ�����, ���� 15�ڸ�����
	cin >> midterm >> final;

	// ���� ������ ����
	cout << "Enter all homework grades "
		"followed by EOF: "; // End-Of-File

	vector <double> homework; 
	// �Է��� ���� ����
	double x; // cin���� ����ϱ� 

	// �Һ���: ���ݱ��� count�� ������ �Է¹޾�����
	// �Է¹��� ������ ���� sum
	while (cin >> x) {
		++count; // ���� 1, 2, 3, 4, 5, 6, ...
		sum += x; // 0 + 99 + 98 + 85 + 71 ...
	}

	// ����� ���
	streamsize prec = cout.precision(); // ���� cout precision
	cout << "Final grade: " << setprecision(3)
		<< 0.2 * midterm + 0.4 * final + 0.4 * sum / count
		<< setprecision(prec) << endl;

	return 0;
} // main ��
