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

	cout << "두 수를 입력해주세요 (띄어쓰기로 구분) >>";
	cin >> a >> b;
	cout << endl;

	cout << "큰 수 >>"<< max(a,b) << endl;
	cout << "작은 수 >>"<<min(a,b) << endl;
}