#include<iostream>
using namespace std;
// C++ 스타일
//struct Address
//{
//	string city;
//	string street;
//
//};
//struct Person
//{
//	string name;
//	int age;
//	Address addr;
//	
//
//	void study()
//	{
//		cout << name << "학생이 공부중입니다"<< endl;
//	}
//};	// MyPerson;	//Alias(별칭)

//int main()
//{
//	//Person p1 = {"ci",28,"제주"};	//자료형 역할을 함
//	/*p1.name = "ci";
//	p1.adrress = "제주";
//	p1.age = 28;*/
//
//	//cout << "이름: " << p1.name << endl;
//	//cout << "주소: " << p1.adrress << endl;
//	//cout << "나이: " << p1.age << endl;
//	
//	//Person p1 = { "ci",28, {"제주","이도이동"} };
//	//cout << "이름" << p1.name << endl;
//	//cout << "나이" << p1.age << endl;
//	//cout << "주소" << p1.addr.street << endl;
//
//}

// 실습 1. 구조체 사용해보기
//struct Rectangle
//{
//	int width;
//	int height;
//
//	void getArea() {
//		cout << "넓이는 : " << (width * height);
//	}
//	//int a1() { return width * height; } 
//};
//struct Point
//{
//	int x;
//	int y;
//	void add(const Point& other)
//	{
//		cout << "좌표의 합은 : " << (x+ other.x) << ", " << (y+other.y) << endl;
//	}
//};
//
//int main()
//{
//	//Rectangle r1;
//	//cout << "사각형의 가로 세로를 입력하세요 :";
//	//cin >> r1.width >> r1.height;
//	//
//	//r1.getArea();
//	
//	Point p1,p2;
//	cout << "첫번째 좌표 x, y : ";
//	cin >> p1.x >> p1.y;
//	cout << "두번째 좌표 x, y : " ;
//	cin >> p2.x >> p2.y;
//
//	p1.add(p2);
//}

// 클래스 
//class Car 
//{
//public:
//	string brand;
//	int speed;
//
//	void drive()
//	{
//		cout << brand << "가" << speed << "km/h로 주행합니다." << endl;
//	}
//};
//int main()
//{
//	Car c1;
//	c1.brand = "BMW";
//	c1.speed = 150;
//
//	c1.drive();
//}

//class Person
//{
//private:
//	string name;
//	int age;
//
//public:
//
//	Person(string name, int age)
//	{
//		this->name = name;
//		this->age = age;
//	}
//	void setName(string name)
//	{
//		this->name = name;
//		//cout << "이름을 입력해 주세요 :" ;
//		//cin >> name;
//	}
//	void setAge()
//	{
//		this->age = age;
//	/*	cout << "나이를 입력해 주세요 :" ;
//		cin >> age;*/
//	}
//	void showinfo()
//	{
//		cout << "이름 : " << name << " 나이 : " << age;
//	}
//};
//
//int main()
//{
//	Person p1 = {"창일",25};
//	//p1.setName();
//	//p1.setAge();
//	p1.showinfo();
//}

// 실습 3.클래스 사용해보기(3) - 계좌
//1. accountNumber(계좌번호), balance(잔액)를 멤버 변수로 가지는 BankAccount 클래스 작성
//2. 생성자에서 계좌번호와 초기 잔액을 설정
//3. deposit(int amount), withdraw(int amount) 멤버 함수 추가
//4. 소멸자에서 "계좌 삭제됨: [계좌번호]" 출력

class BankAccount
{
private:
	int accountNumber;
	int balance;

public:
	BankAccount(int accountNumber, int blance)
	{
		this->accountNumber = accountNumber;
		this->balance = balance;
	}
	void deposit(int amount)
	{
		this->balance = balance;
	}
	void withdraw(int amount)

};