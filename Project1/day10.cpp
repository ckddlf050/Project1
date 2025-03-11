#include<iostream>
#include<vector>
#include<algorithm>
#include<list>
using namespace std;

//int main()
//{
	/*vector<int> vec = { 1,2,3,4,5,6};*/
	//vector<int> vec = { 2,3,5,1,6,4,8 };
	//vector<int> vec2(5, 10);//10을 5개 넣어줌 반복임
	
//반복문 순회
	/*for (int i = 0; i < vec.size(); i++)*/
	//for (int i = 0; i < vec.end() - vec.begin(); i++)
	//for(vector<int>::iterator it = vec.begin();it ! = vec.end();it++)
	//{
	//	cout << *it << endl;
	//}

//push back
	//vec.push_back(7); //배열의 제일 마지막 원소를 삽입
	//vec.pop_back();	//백터의 마지막 부분 제거
	//vec.insert(vec.begin() + 3, 10);
	//vec.erase(vec.begin() + 3);

//정렬
	//sort(vec.begin(), vec.end());

//차원 백터
	//vector<vector<int>> vec = { {1,2,3} ,{4,5,6},{7,8,9} };

	//for (int i = 0; i < vec.size(); i++)
	//{
	//	for (int j = 0; j < vec[i].size(); j++)
	//	{
	//		cout << vec[i][j] << " ";
	//	}
	//	cout << endl;
	//}

	/*cout << vec[1];*/

	//cout << vec.at(3);

//}

//int main()
//{
//
////실습 1. vector 조작하기
//	//1 .빈벡터 만들기
//	vector<int> numbers;
//	//2. 입력 5개 받아서 벡터의 추가
//	cout << "정수를 입력하세요 :";
//	for (int i = 0; i < 5; i++)
//	{
//		int num;
//		cin >> num;
//		numbers.push_back(num);
//	}
//	// 3.크기
//	cout << "벡터의 크기 : " << numbers.size() << endl;
//	// 4.모든 원소
//	cout << "입력한 정수 : ";
//	for (int val : numbers)
//	{
//		cout << val << " ";
//	}
//	cout << endl;
//	// 5.큰값
//	int max_value = numbers[0];
//	for (int num : numbers)
//	{
//		if (num > max_value) max_value = num;
//	}
//	cout << "가장 큰값 : " << max_value << endl;
//
//	// 6.두배 값
//	for (int& num : numbers) num *= 2;
//	
//	// cout << numbers[0];
//
//	// 7. 인덱스를 받아 해당인덱스 원소 제거
//	int remove_index;
//	cout << "제거할 인덱스를 입력하세요 : ";
//	cin >> remove_index;
//	numbers.erase(numbers.begin() + remove_index);
//
//	//8. 인덱스를 입력받아 새로운 원소 추가
//
//	int insertIdex, insertVal;
//	cout << "삽입할 인덱스와 값을 입력하세요";
//	cin >> insertIdex >> insertVal;
//	numbers.insert(numbers.begin() + insertIdex, insertVal);
//
//}

////실습 2. 2차원 행렬 만들기
//int main()
//{
//	int rows, cols;
//	cout << "행과 열의 크기를 입력하세요 :";
//	cin >> rows >> cols;
//
//	vector<vector<int>> matrix(rows,vector<int>(cols,0));
//	for (int i = 0; i < rows; i++)
//	{
//		for (int j = 0; j <cols; j++)
//		{
//			matrix[i][j] = (i + 1) * (j + 1);
//		}
//	}
//	for (int i = 0;i<rows;i++ ) 
//	{
//		for (int j=0; j<cols;j++) 
//		{
//			cout << matrix[i][j];
//		}
//		cout << endl;
//	}
//}

//실습3. 2차원 행렬 만들기
//int main()
//{
//	int rows, cols;
//	cout << "행과 열의 크기를 입력하세요 :";
//	cin >> rows >> cols;
//
//	vector<vector<int>> matrix(rows, vector<int>(cols));
//
//	cout << "행렬의 원소를 입력하세요" << endl;
//	for (int i = 0; i < rows; i++)
//	{
//		for (int j = 0; j < cols; j++)
//		{
//			cin >> matrix[i][j];
//		}
//	}
//	cout << "각 행의 합: " << endl;
//	for (int i=0; i < rows; i++)
//	{
//		int rowSum = 0;
//		for (int j=0; j < cols; j++)
//		{
//			rowSum += matrix[i][j];
//		}
//		cout << "행 " << i + 1 << ": " << rowSum << endl;
//	}
//	cout << "각 열의 합: " << endl;
//	for (int i=0; i < cols; i++)
//	{
//		int colSum = 0;
//		for (int j=0; j < rows; j++)
//		{
//			colSum += matrix[j][i];
//		}
//		cout << "열 " << i + 1 << ": " << colSum << endl;
//	}
//}

// list 사용법
//int main()
//{
//	list<int> myList = { 1,2,3,4,5 };
//
//	////리스트에 원소 추가/삭제
//	//myList.push_back(6);	//뒤에 추가
//	//myList.push_front(0);	//앞에서 추가
//	//myList.pop_front();	// 앞에서 삭제
//	//myList.pop_back();	//뒤에서 삭제
//	//myList.erase(++myList.begin()); // 두번째 요소 삭제
//	//myList.clear();	//모든 요소 삭제
//
//	//auto it = myList.begin();
//	//advance(it, 2);
//	//myList.insert(it, 10);
//	//myList.remove(5); // 원하는 부분을 지움
//	//// 조건부 remove
//	//myList.remove_if([](int n) {return n % 2 == 0; }); //홀수만 남음
//	///*advance(it, 1);
//	//myList.erase(it);*/
//
//	//병합
//	list<int> list1 = { 1,2,3,2 };
//	list<int> list2 = { 4,5,6 };
//
//	//list1.unique(); //중복 제거
//	//list1.splice(++list1.begin(), list2);	//list2의 모든 요소를 list1의 끝에 이동
//	
////list 순회
//	for (auto it = myList.begin(); it != myList.end(); it++)
//	{
//		cout << *it << endl;
//	}
//
//	cout << "번거러움";
//}

// list 실습1. list 사용해보기

int main()
{
// 1.리스트 만들기
	list<int> myList = { 5,4,3,4,2,1,1 };
// 2. 4가 몇개인지 출력
	//solutiton
	int count = 0;
	for (auto it = myList.begin(); myList.end(); it++) {
		if (*it == 4) count++;
	}

	//int cnt = count(myList.begin(), myList.end(), 4);
	//cout << "4의 개수: "<< cnt << endl;
// 3.정렬
	myList.sort();
	cout << "정렬된 리스트"<< endl;
	for (int num : myList)
	{
		cout << num << " " ;
	}
	cout << endl;
// 4.연속된 중복값 제거
	myList.unique();
	cout << "중복 제거 리스트"<< endl;
	for (int num : myList)
	{
		cout << num << " ";
	}
	cout << endl;
//5.6,7추가 push_back()로 추가 가능
	list<int> addMy = { 6,7 };
	myList.merge(addMy);
	for (int num : myList)
	{
		cout << num << " ";
	}
	cout << endl;

//앞에 0추가
	myList.push_front(0);
	for (int num : myList)
	{
		cout << num << " ";
	}
	cout << endl;

	
}