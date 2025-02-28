
#include<iostream>
#include<bitset>
using namespace std;

int main() 
{
	// 실습 1 특정 비트 설정
	int num1 = 0b00010010;
	int num1_1 = 0b00100000;
	cout << "Q1.정답: " << bitset<8>(num1 | num1_1) << endl;

	int num2 = 0b10101111;
	int num2_2 = 0b00000100;
	// num2 ~&(1<<2)
	cout << "Q2.정답: " << bitset<8>(num2 & ~num2_2) << endl;

	int num3 = 0b11011010;
	int num3_3 = 0b00010000;
	//num3 ^=(1<<4)
	cout << "Q3.정답: " << bitset<8>(num3  ^num3_3) << endl;

	int num4;
	cout << "Q4.임의의 숫자를 입력해주세요:";
	cin >> num4;
	cout << "Q4.정답" << ((num4 >> 4) & 0b1)  << endl;

	int num5;
	cout << "Q5.임의의 숫자를 입력해주세요:";
	cin >> num5;
	bool isOdd = num5 & 1;
	cout << "Q5.정답" << (isOdd ? "홀수" : "짝수") << endl;

	int num6;
	cout << "Q5.임의의 숫자를 입력해주세요:";
	cin >> num6;
	bool isPwoerOfTwo = num6 ^ (num6 - 1);
	cout << "Q6.정답" << (isPwoerOfTwo ? "아님" : "2의 거듭제곱") << endl;







    ////Q1. num = 0b00010010(10진수 18)에서 5번째 비트를 1로 설정한 결과를 출력하세요.
    //int num1 = 0b00010010;
    //num1 |= (1 << 5);
    //cout << "Q1. 정답: " << bitset<8>(num1) << endl;

    ////Q2. num = 0b10101111(10진수 175)에서 2번째 비트를 0으로 변경한 결과를 출력하세요.
    //int num2 = 0b10101111;
    //num2 & ~(1 << 2);
    //cout << "Q2. 정답: " << bitset<8>(num2) << endl;

    ////Q3. num = 0b11011010(10진수 218)에서 4번째 비트를 반전시킨 결과를 출력하세요.
    //int num3 = 0b11011010;
    //num3 ^= (1 << 4);
    //cout << "Q3. 정답: " << bitset<8>(num3) << endl;

    ////Q4. 임의의 num이 주어졌을 때 4번째 비트를 추출하여 출력하세요.
    //int num4;
    //cout << "Q4. 임의의 숫자를 입력해주세요:";
    //cin >> num4;
    //bool isSet = (num4 & (1 << 4));
    //cout << "Q4. 정답: " << isSet << endl;

    ////Q5. 임의의 num이 주어졌을 때, 홀수인지 짝수인지 비트 연산자로 판별하세요.
    //int num5;
    //cout << "Q5. 임의의 숫자를 입력해주세요:";
    //cin >> num5;
    //bool isOdd = num5 & 1;
    //cout << "Q5. 정답: " << (isOdd ? "홀수" : "짝수") << endl;

    ////Q6. 임의의 num이 주어졌을 때, 2의 거듭제곱인지 확인하세요.
    //int num6;
    //cout << "Q6. 임의의 숫자를 입력해주세요:";
    //cin >> num6;
    //bool isPowerOfTwo = num6 & (num6 - 1);
    //cout << "Q6. 정답: " << (isPowerOfTwo ? "아님" : "2의 거듭제곱") << endl;



}