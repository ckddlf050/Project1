#include<iostream>
#include<bitset>
using namespace std;

int main() 
{
	// & (and)
	//int a = 0b0101;	//5
	//int b = 0b1001;	//9
	//cout << bitset <4>(a & b) << endl; // 0001
	//cout << bitset <4>(a | b);	// 1101

	// ^(XOR)
	//int c = 0b1010;
	//int d = 0b1001;
	//cout << bitset<4>(c ^ d) << endl;
	//cout << (c ^ d) << endl;

	//<시프트
	//int e = 0b0011;
	//cout << bitset<4>(e >> 1);

	//특정 비트의 추가와 제거
	int f = 0b1000;
	// 비트 추가
	cout << bitset<4>(f |= 1 << 1) << endl;
	// 비트 제거
	cout << bitset<4>(f &~(1 << 1)) << endl;

}