#include<iostream>
#include<bitset>
using namespace std;

int main()
{
	//int numbers[5] = {10,20,30,40,50};
	//// 인덱싱: 배열이름[인덱스번호]
	//for (int i = 0; i < 5; i++)
	//{
	//	cout << numbers[i] << endl;
	//}
	
	// 다차원 배열
	//string words[2][2] = { {"가","나"},{"다","라"} };
	//cout << words[0][0];

	// for each문
	//int numbers[4] = {10,20,30,40};
	//for (int num : numbers)
	//{
	//	cout << num << endl;
	//}

	// 실습 2 : 배열연습(2) 
	//  city2 라는 배열 변수를 선언하고, 5개의 나라 이름은 사용자가 콘솔에 입력한 값으로 지정
	//string city2[5] = {};
	//for (int i = 0; i < 5; i++)

	//{
	//	cout << "나라를 입력해주세요 : " ;
	//	cin >> city2[i];
	//}
	//for (string c2 : city2)
	//{
	//	cout << c2 << " ";
	//}

	//배열 연습 (3)
	//(1) grade 라는 배열 변수를 선언하고, 학생 5인의 성적 입력받기
	//(2) for문 혹은 for - each문을 활용하여 학생 5인의 성적 평균 산출

	int grades[5] = {};
	int sum = 0;
	double average;
	for (int i = 0; i < 5; i++)
	{
		cout << i + 1 << "번 학생의 성적을 입력하세요: ";
		cin >> grades[i];
	}
	for (int grade : grades)
	{
		sum += grade;
	}
	average = (double)sum / 5;
	cout << "성적 평균 :" << average;
}