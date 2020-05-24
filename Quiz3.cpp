#include<iostream>
using namespace std;

int max(int a, int b) // 함수 이름은 max로, 매개변수는 정수a,b로 설정한다.
{
	if (a > b) // a가 b보다 큰 경우에는
		return a; // a가 출력
	else       // a가 b보다 작은 경우에는 
		return b; // b가 출력
}

int min(int a, int b) // 함수 이름은 min으로, 매개변수는 정수a,b로 설정한다.
{
	if (a < b) // a가 b보다 작은 경우에는
		return a; // a가 출력
	else      // a가 b보다 큰 경우에는
		return b; // b가 출력
}

int main() // 출력은 main함수를 사용
{
	int a, b;

	cout << "두 수를 입력해주세요 (띄어쓰기로 구분) >>";
	cin >> a >> b;
	cout << endl;

	cout << "큰 수 >>"<< max(a,b) << endl; // max함수를 호출
	cout << "작은 수 >>"<<min(a,b) << endl; // min함수를 호출 
}
