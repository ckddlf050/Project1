#include<vector>
#include<iostream>
//string을 안써도 사용가능함 > iosstream의 string이 포함됨
//getline은 포함이 안되어있음
#include<string>
using namespace std;

// 
//int main()
//{
	//char c[] = "문자열";	 //
	//string s1 = "Hello ";
	//string s2("World "); //둘다 가능
	//string s3(5, '!');	//문자열 반복 가능 ''로 사용해야함
	//cout << s1; //<< s2 << s3;	//Hello World !!!!!

	//string s1;
	//getline(cin, s1);	//s1의 입력을 받음 공백을 포함허여
	
	//string s1 = "Hello";
	//string s2 = "World";
	//cout << s1 + s2;

	//string s1 = "aaaaa";
	//string s2 = "b";	//사전순서로 비교함 사전순이 같다면 길이로 0,1로 표현
	//cout << (s1 < s2); //비교연산자가능

	//string s1 = "codingon";
	//cout << s1.at(8) << endl;
	//cout << s1[8] << endl;

	//string s1 = "codingon";
	//cout << s1.front();	//c	앞글자
	//cout << s1.back();	//n	뒷글자
	//cout << s1.size();	//8	글자수
	
	//string s1 = "codingon";
	//cout << s1.insert(6, " ");	//중간에 문자 추가

//실습 1 string 사용
//1. s 문자열의 길이 출력
//2. 100번째 문자 출력(index는 0부터 시작)
//3. “two” 라는 문자가 처음 나오는 index 출력
//4. “two” 라는 문자가 두번째 나오는 index 출력
	//string s = "Police say two people are suspected of trying to create a shortcut for their construction work.The two have been detained and the case is under furtherinvestigation.The 38 - year - old man and 55 - year - old woman were working near theaffected area, the 32nd Great Wall.";
	//cout << s.size()<<endl;
	//cout << s[99]<<endl;
	//cout << s.find("two")<<endl;
	//cout << s.find("two", 12);

//}


//실습2 
//1. 두 문자열을 입력 받아서 둘 모두 숫자인지 검사, 아니면 다시 입력 받기
//	• “1111”->OK
//	• “abcd”, “a123”, “123a” → NO
//2.앞에서 입력 받은 두 숫자를 이어 붙여서 출력
//	• “1111” “2222” → “11112222”
//3.앞에서 입력 받은 두 숫자의 합을 출력
//	• “1111” “2222” → 3333

//bool isNumber(string str)
//{
//	for (char c : str)
//	{
//		if (!isdigit(c)) return false;
//	}
//	return true;
//}
//
//int main()
//{
//	string str1, str2;
//	while (true)
//	{
//		//문자열 두개를 입력받아서
//		cout << "첫 번째 숫자를 입력해 주세요: ";
//		cin >> str1;
//		cout << "두 번째째 숫자를 입력해 주세요: ";
//		cin >> str2;
//
//		// 둘다 숫자인제 체크하고
//		if (isNumber(str1) && isNumber(str2))
//		{
//			break;
//		}
//		// 하나라도 숫자가 아니면, 다시 입력을 받는다(반복)
//		cout << "숫자만 입력해주세요 !!!" << endl;
//	}
//	cout << "문자열 이어붙이기 : " << str1 + str2 << endl;
//	cout << "숫자의 합 " << stoi(str1) + stoi(str2) << endl;
//}


int main()
{
//1. string s = “Codingon”
//2.첫번째 문자 소문자로 변경 →“codingon”
//3.“ding” 이라는 부분문자열 반환
//4.“coooooon” 이 되도록 변경
//5.“con” 이 되도록 변경

	string s = "Codingon";
	s[0] = tolower(s[0]);
	cout << "1 번" <<s << endl;
	cout << "2 번" << s.substr(2, 4) << endl;
	cout << "3 번" << s.replace(2, 4, "oooo") << endl;
	cout << "4 번" << s.erase(2, 5);
}
