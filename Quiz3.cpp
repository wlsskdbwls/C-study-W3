#include<iostream>
using namespace std;

int max(int a, int b) 
{
	if (a > b) 
		return a;
	else
		return b;
}

int min(int a, int b)
{
	if (a < b)
		return a;
	else
		return b;
}

int main()
{
	int a, b;

	cout << "�� ���� �Է����ּ��� (����� ����) >>";
	cin >> a >> b;
	cout << endl;

	cout << "ū �� >>"<< max(a,b) << endl;
	cout << "���� �� >>"<<min(a,b) << endl;
}