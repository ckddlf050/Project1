// 조건문
#include<iostream>
#include<bitset>
using namespace std;

int main()
{
	//int myInput;
	//cin >> myInput;

	//switch (myInput)
	//{
	//case 1:
	//	cout << "1이네요" << endl;
	//	break;

	//case 2:
	//	cout << "2네요" << endl;
	//	break;
	//default:
	//	cout << "그외" << endl;

	//}

	//삼항 연산자
	// 조건 ? 참일떄: 거짓일 때 실행

	//int age;
	//cout << "나이를 입력하세요. ";
	//cin >> age;

	//if (age < 8)
	//{
	//	cout << "유아";
	//}
	//else if (age < 14)
	//{
	//	cout << "초등학생";
	//}
	//else if (age < 17)
	//{
	//	cout << "중학생";
	//}
	//else if (age < 20)
	//{
	//	cout << "고등학생";
	//}
	//else if (age >= 20)
	//{
	//	cout << "성인";
	//}
	//else if (age >= 200)
	//{
	//	cout << "나이가 너무 많습니다..!";
	//}

	//실습2
	//cout << "이름을 입력하세요";
	//string name;
	//cin >> name;

	//if (name == "홍길동")
	//{
	//	cout << "남자";
	//}
	//else if (name == "성춘향")
	//{
	//	cout << "여자";
	//}
	//else
	//{
	//	cout << "모르겠어요";
	//}

	//실습 3
	//int num;
	//cout << "숫자를 입력해주세요" << endl;
	//cin >> num;
	//bool a = (num % 5 == 0);
	//cout << num << (a ? "는 5의 배수입니다" : "는 5의 배수가 아니네요");

	// 실습 4

	int a,b;
	char c;
	cout << "연산할 정수 두개를 입력해 주세요" << endl;
	cin >> a >> b;
	cout << "연산자를 입력해주세요.(+ - * /)" << endl;
	cin >> c;
	cout << "*****연산결과--->";

	switch (c)
	{
		case '+':
			cout << "결과 : "<< a+b << endl;
			break;
		case '-':
			cout << "결과 : " << a - b << endl;
			break;
		case '*':
			cout << "결과 : " << a * b << endl;
			break;
		case '/':
			if (b != 0)
			{
				cout << "결과 : 몫은" << a / b << "나머지는" << a % b << endl;
			}
			else
				cout << "0으로 나눌수 없어요" << endl;
			break;
		default:
			cout << "연산자가 아니에요.";
	}
	
	


}
