#include "Sum.h"
#include <iostream>

using namespace std;

//�Լ��̸� : Sum
//�Ű� ���� (�Ķ��Ÿ) : int a, int b
//��ȯ�� : int
// a�� b�� ���� ����� ��ȯ�Ͻÿ�

int NewSum()
{
	int a, b = 0;

	cout << "a = " << endl;
	cin >> a;

	cout << "b = " << endl;
	cin >> b;

	return a + b;
}
