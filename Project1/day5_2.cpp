#include<iostream>
using namespace std;

//// �������� ��������
//void funcA(int x) 
//{
//	int localA = x + 1;
//	cout << "FunctA :" << localA << endl;
//
//}
//void funcB(int x)
//{
//	int localB =x * 2;
//	funcA(localB);
//	cout << "funcB : " << localB << endl;
//}
//int main()
//{
//	int num = 5;
//	funcB(num);
//	cout << num << endl;
//}

// ����Լ�
//void RecursiveFunc(int n)
//{
//	if (n == 0)return;
//	cout << "����Լ� ȣ��" << endl;
//	RecursiveFunc(n-1); //���
//}
//int main()
//{
//	RecursiveFunc(3);
//}

//int factorial(int n)
//{
//	int result = 1;
//	for (int i = 1; i <= n; i++)
//	{
//		result *= i;
//	}
//	return result;
//}
//
//int factorialRe(int n)
//{
//	if (n == 1) return 1;
//	int facValue = factorialRe(n - 1);
//	return n * facValue; //����Լ� ���
//}
//
//int main()
//{
//	int result = factorialRe(5);
//	cout << "���丮��: " << result << endl;
//}.
// ���� 6
int func6(int a, int b)
{
	if (b == 1)return a;
	return a * func6(a, b - 1);

}
int main()
{
	int a, b;
	int result = func6(2,5);
	cout << result;
}