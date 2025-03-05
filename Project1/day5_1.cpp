#include<iostream>
using namespace std;

//int add(int x, int y)
//{
//	return x + y;
//}
//
//int sub(int x, int y)
//{
//	return (x > y) ? (x - y) : (y - x);
//}
//
//int mul(int x, int y)
//{
//	return x * y;
//}
//
//double devide(int x, int y)
//{
//	return  (double)x / y;
//}
//
//
//int main()
//{
//	cout << add(10,20) << endl;
//	cout << sub(30, 100) << endl;
//	cout << mul(3,4) << endl;
//	cout << devide(5, 2) << endl;
//
//}

//void oddEvenDetectior(int x)
//{
//	if (x % 2 == 0)
//	{
//		cout << "Â¦¼ö";
//	}
//	else
//	{
//		cout << "È¦¼ö";
//	}
//}
//
//int main()
//{
//	int num;
//	cout << "º¯¼ö ÀÔ·Â: ";
//	cin >> num;
//	oddEvenDetectior(num);
//}
int findmax(int a, int b, int c)
{
	if (a > b && b > c)
	{
		return a;
	}
	else if (b > a && b > c)
	{
		return b;
	}
	else
	{
		return c;
	}
}

int main()
{
	int a,b,c;
	cout << "º¯¼öÀÔ·Â: ";
	cin >> a >> b >> c;
	cout << findmax(a, b, c);
}