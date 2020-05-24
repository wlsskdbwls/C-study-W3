#include<iostream>
using namespace std;

void print(char arr[]) // ��� �Լ� print�� ���
{
	int i;
	for (i = 0; i < 5; i++)
		cout << i + 1 << ". " << arr[i] << endl;
}

void sort(char arr[]) // ���� �Լ� sort�� ���
{
	int i, j, temp; // ���� ��ȯ�� �ʿ��� �ӽ� ���� temp�� ����

	for (i = 0; i < 5; i++) // ����� ����(5��)��ŭ �ݺ�
	{
		for (j = 0; j < 4 ; j++) // ����� ���� - 1 (4��)��ŭ �ݺ�
		{
			if (arr[j] > arr[j + 1]) // ���޾� �ִ� �� �� �߿� �տ� �ִ� ���� ũ�ٸ�
			{
				temp = arr[j]; 
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				// ��ġ�� �������ش�.(���� ���� ������, ū ���� �ڷ� ������)
			}
		}
	}
}


int main()
{
	char arr[10];
	int i;

	cout << "���� �ټ����� �Է����ּ���. (����� ����) >> ";
	for (i = 0; i < 5; i++)
		cin >> arr[i]; // 5���� ���ڸ� �Է� �޴´�.

	cout << endl << "<���� ��>" << endl;
	print(arr); // print�Լ� ȣ��

	sort(arr); // sort�Լ� ȣ��

	cout << endl << "<���� ��>" << endl;
	print(arr); // print�Լ� ȣ��
	// sort�Լ��� ȣ�������Ƿ� ������������ ��µȴ�.
}