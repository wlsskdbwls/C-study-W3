#include<iostream>
using namespace std;

void print(int *arr) // 출력 함수 print를 사용
{
	int i;
	for (i = 0; i < 5; i++)
		cout << i + 1 << ". " << arr[i] << endl;
}

void sort(int *arr) // 정렬 함수 sort를 사용
{
	int i, j, temp; // 숫자 교환에 필요한 임시 변수 temp를 선언

	for (i = 0; i < 5; i++) // 요소의 개수(5개)만큼 반복
	{
		for (j = 0; j < 4 ; j++) // 요소의 개수 - 1 (4개)만큼 반복
		{
			if (arr[j] > arr[j + 1]) // 연달아 있는 두 수 중에 앞에 있는 수가 크다면
			{
				temp = arr[j]; 
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				// 위치를 변경해준다.(작은 수가 앞으로, 큰 수가 뒤로 가도록)
			}
		}
	}
}


int main()
{
	int arr[5]; //크기가 5인 배열 선언
	int i;

	cout << "숫자 다섯개를 입력해주세요. (띄어쓰기로 구분) >> ";
	for (i = 0; i < 5; i++)
		cin >> arr[i]; // 5개의 숫자를 입력 받는다.

	cout << endl << "<정렬 전>" << endl;
	print(arr); // print함수 호출

	sort(arr); // sort함수 호출

	cout << endl << "<정렬 후>" << endl;
	print(arr); // print함수 호출
	// sort함수를 호출했으므로 오름차순으로 출력된다.
}
