#include<iostream>
using namespace std;

//class Person
//{
//public:
//	string name;
//
//	Person* setName(string name)
//	{
//		this->name = name;
//		return this;
//	}
//	void showName()
//	{
//		cout << "내 이름은 : " << name << endl;
//	}
//};
//int main()
//{
//	Person p1;
//	p1.setName("창일")->showName();
//}

//실습1. 두객체 비교 및 반환
//class Rectangle
//{
//public:
//	int width;
//	int height;
//
//	Rectangle(int w, int h) : width(w), height(h) {}
//	int getArea() const
//	{
//		return width * height;
//	}
//	Rectangle* compareArea(Rectangle& other)
//	{
//		return(this->getArea() >= other.getArea()) ? this : &other;
//	}
//	void showInfo() const
//	{
//		cout << "가로 : " << width << " 세로 : " << height << " 넓이 : " << getArea() << endl;
//	}
//};
//
//int main()
//{
//	Rectangle r1(5, 7);
//	Rectangle r2(4, 9);
//	Rectangle* big = r1.compareArea(r2);
//
//	cout << "더 넓은 사각형 : " << endl;
//	big->showInfo();
//}

//// & (레퍼런스) : 포인터에서 파생
//int a = 10;
//int b = 20;
//int* const p = &a;
//*p = 100;
//
//int& r = a; //a의 메모리에 접근해서 가져는것
//r = 200;

//static 변수
//class Counter
//{
//private:
//	static int count;
//public:
//	Counter()
//	{
//		count++;
//	}
//	static int getCount()
//	{
//		return count;
//	}
//};
//int Counter::count = 0;
//
//int main()
//{
//	Counter c1, c2, c3;
//
//	cout << "객체 수 : " << Counter::getCount() << endl;
//}

//실습 2
//class User
//{
//private:
//	static int nextID;
//	int id;
//	string name;
//public:
//	User(string userName)
//	{
//		id = ++nextID;
//		name = userName;
//	}
//	void showInfo()
//	{
//		cout << "ID : " << id << ", 이름 : " << name << endl;
//	}
//	static int getTotalUsers()
//	{
//		return nextID;
//	}
//};
//int User::nextID = 0;
//int main()
//{
//	User u1("A");
//	User u2("B");
//	User u3("C");
//
//	u1.showInfo();
//	u2.showInfo();
//	u3.showInfo();
//	cout << "사용자 수: " << User::getTotalUsers() << endl;
//}
class Parent
{
public:
	string familyName;
	string address;
	string asset;
	Parent()
	{
		familyName = "김";
	}
	void eat()
	{
		cout << "피자" << endl;
	}
};
class Child : public Parent
{
public:
	void showFamilyName()
	{
		cout << "우리의 성은 : " << familyName << endl;
	}
};

int main()
{
	Child c1;
	c1.showFamilyName();
	c1.eat();
}