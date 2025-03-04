#include<iostream>
using namespace std;
// 반복문 for while 

int main()
{
	//for (int i = 0; i < 5; i++)
	//{
	//	cout << "반복" << i << endl;
	//}

	//int i = 5;
	//do
	//{
	//	i++;
	//} while (i < 5);
	//
	//cout << i << endl;

	//// 에제 1
	//// 입력한 숫자만큼 별찍기
	//int n;
	//cout << "input : ";
	//cin >> n;
	//for (int i = 1; i <= n; i++) 
	//{
	//	for (int j = 0; j < i; j++) 
	//	{
	//		cout << "*";
	//	}
	//	cout << endl;
	//}
	//
	////에제1_1 역으로 별찍기

	//for (int i = 0; i <= n; i++)
	//{
	//	cout << string(n - i, ' ') << string(i, '*') << endl;
	//}

	// 예제 2. 구구단 만들기
	// (1) 5단만 출력

	//cout << "5단출력" << endl;
	//for (int i = 1; i <= 9; i++) 
	//{
	//	cout << "5 * " << i << "="  << 5 * i << endl;
	//}

	//// 예제 2
	//cout << "1~9단 출력" << endl;
	//for (int i = 1; i <= 9; i++)
	//{
	//	cout << "----" << i << "단----" << endl;

	//	for (int j = 1; j <= 9; j++) 
	//	{
	//		cout << i << " * " << j << " = " << i * j << endl;
	//	}
	//}

	// 예제 4
	// 사용자가 입력한 숫자 더하기

	//cout << "사용자가 입력한 숫자 더하기" << endl;
	//int answer = 0;
	//while (true)
	//{
	//	int num;
	//	cout << "숫자를 입력하세요 (0: exit):";
	//	cin >> num;
	//	if (num == 0) break;
	//	answer += num;
	//}
	//cout << "사용자가 입력한 수의 합은 : " << answer << endl;

	// 비트연산 실습 예제
	// 실습4 답안 예시
	/*int num4;
	cout << "Q4. 임의의 숫자를 입력해주세요:";
	cin >> num4;
	bool isSet = (num4 & (1 << 4)) != 0;
	cout << "Q4. 정답: " << (isSet ? 1 : 0) << endl;*/
	// 예제7, 가장 왼쪽에 있는 1비트의 위치 찾기	
	//int num7;
	//int position = 0;
	//cout << "임의의 숫자를 입력해주세요 :";
	//cin >> num7;

	//for (int i = 7; i >= 0; i--)
	//{
	//	if (num7 & (i << i))
	//	{
	//		position = i;
	//		break;
	//	}
	//}
	//cout << "가장 왼쪽의 1이 위치한 자리: " << position;

	// 예제 8
	int num8;
	int position = 0;
	cout << "임의의 숫자를 입력해주세요 :";
	cin >> num8;

	if (num8 == 0)
	{
		cout << "입력이 0이네요";
	}
	else
	{
		for (int i = 0; i < sizeof(num8) * 8; i++)
		{
			if (num8 & (1 << i))
			{
				position = i;
				break;
			}
		}
		cout << "가장 왼쪽의 1이 위치한 자리" << position;
	}
	/*for (int i = 0; i <= sizeof(num8)*8-1; i++)
	{
		if (num8 & (i << i))
		{
			position = i;
			break;
		}
	}
	cout << "가장 오른의 1이 위치한 자리: " << position;*/

}