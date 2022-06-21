#include "Sum.h"
#include <iostream>

using namespace std;

//함수이름 : Sum
//매개 변수 (파라메타) : int a, int b
//반환값 : int
// a와 b를 합한 결과를 반환하시오

int NewSum()
{
	int a, b = 0;

	cout << "a = " << endl;
	cin >> a;

	cout << "b = " << endl;
	cin >> b;

	return a + b;
}
