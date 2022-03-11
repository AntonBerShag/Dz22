#include <iostream>
using namespace std;


template <typename T> void showArray(T arr[], int length);
template <typename T> void swapNum(T arr[], int length);
void degree(int *var, int num);

int main() {
	setlocale(LC_ALL, "Russian");

	//������ 1
	cout << "������ 1\n";
	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
	cout << "�������� ������:\n[";
	for (int i = 0; i < 10; i++)
		cout << *(arr1 + i) << ", ";
	cout << "\b\b]\n";
	
	for (int i = 0; i < 10; i += 2) {
		if (i < 10) {
			int tmp = *(arr1 + i);
			*(arr1 + i) = *(arr1 + i + 1);
			*(arr1 + i + 1) = tmp;
		}
	}

	cout << "�������� ������:\n[";
	for (int i = 0; i < 10; i++)
		cout << *(arr1 + i) << ", ";
	cout << "\b\b]\n\n";

	//������ 2
	cout << "������ 2\n";
	int n = 10;
	cout << "�������� ����� - " << n << "\n";
	degree(&n, 3);
	cout << "�������� ��������� - " << n << "\n\n";

	return 0;
}

//������ 2
void degree(int *var, int num) {
	int res = *var;
	if (num == 0) 
		*var = 1;
	else
		for (int i = 1; i < num; i++)
			*var *= res;
}
//������ 1(���???)
template <typename T> void swapNum(T arr[], int length) {
	cout << "�������� ������:\n[";
	for (int i = 0; i < length; i += 2) {
		if (i < length) {
			T tmp = *(arr + i);
			*(arr + i) = *(arr + i + 1);
			*(arr + i + 1) = tmp;
		}
		cout << *(arr + i) << ", ";
	}
	cout << "\b\b]\n";
}
//���������� �������� ������
template <typename T> void showArray(T arr[], int length) {
	cout << "�������� ������:\n[";
	for (int i = 0; i < length; i++)
		cout << *(arr + i) << ", ";
	cout << "\b\b]\n";
}