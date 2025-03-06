// 실습 피보나치수열
// 반복문을 사용하여 피보나치 수열 구현 >> 재귀함수를 이용해서 수열 구현
// 0이하의 수가 입력될시 0을 리턴

#include<iostream>
#include "func.h"
using namespace std;

//int fibo(int n)
//{
//	if (n <=0) return 0;
//	if (n <= 2) return 1;
//	return fibo(n - 1) + fibo(n - 2);
//}
//int main()
//{
//	/*cout << "피보나치 수열의 항 : ";*/
//	int n;
//	/*cin >> n;*/
//	cout << "값:" << fibo(4) << endl;
//}

// 6. 분할 구현

//void staticFunc()
//{
//	static int globalStatic = 0;
//	globalStatic++;
//	return globalStatic;
//}
//int normalFunc()
//{
//	int normalVar = 0;
//	normalVar++;
//	return normalFunc;
//}
//
//
//int main()
//{
//	staticFunc();
//	staticFunc();
//	cout<< "static" << staticFunc() << endl;
//
//	normalFunc();
//	normalFunc();
//	normalFunc();

	/*cout << add(10, 20) << endl;*/
	//cout << sub(20, 10)<<endl;
	//cout << mul(10, 20)<<endl;
	//cout << divide(20, 10);
//}

int main()
{
	realGlobalVar = 200;
	cout << "진짜 전역변수:" << realGlobalVar;
}

