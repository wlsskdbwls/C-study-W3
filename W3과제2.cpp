#include<iostream>
using namespace std;

void swap(int* a, int*b) // 함수 이름은 swap으로, 매개변수는 정수a,b로 설정한다. 
{
	int temp; // 두 수 교환을 위해 임시 변수 하나를 더 선언한다.

	temp = *a; // temp에 a값 대입
	*a = *b; // a에 b값 대입
	*b = temp; // b에 temp값 대입 
	// 이 과정을 통해 두 수가 교환되었다.
}

int main() // 출력은 main함수로
{
	int a, b;

	cout << "first number >> ";
	cin >> a;

	cout << "second number >> ";
	cin >> b;

	cout << endl;

	cout << "swap 전 >> " << a << " " << b << endl; // swap함수를 호출하기 전
	swap(a, b); // swap함수 호출
	cout << "swap 후 >> " << a << " " << b << endl; // swap함수를 호출하였으므로, 두 수가 교환되서 출력된다.

	
}
