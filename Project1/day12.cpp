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
//		cout << "�� �̸��� : " << name << endl;
//	}
//};
//int main()
//{
//	Person p1;
//	p1.setName("â��")->showName();
//}

//�ǽ�1. �ΰ�ü �� �� ��ȯ
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
//		cout << "���� : " << width << " ���� : " << height << " ���� : " << getArea() << endl;
//	}
//};
//
//int main()
//{
//	Rectangle r1(5, 7);
//	Rectangle r2(4, 9);
//	Rectangle* big = r1.compareArea(r2);
//
//	cout << "�� ���� �簢�� : " << endl;
//	big->showInfo();
//}

//// & (���۷���) : �����Ϳ��� �Ļ�
//int a = 10;
//int b = 20;
//int* const p = &a;
//*p = 100;
//
//int& r = a; //a�� �޸𸮿� �����ؼ� �����°�
//r = 200;

//static ����
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
//	cout << "��ü �� : " << Counter::getCount() << endl;
//}

//�ǽ� 2
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
//		cout << "ID : " << id << ", �̸� : " << name << endl;
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
//	cout << "����� ��: " << User::getTotalUsers() << endl;
//}
class Parent
{
public:
	string familyName;
	string address;
	string asset;
	Parent()
	{
		familyName = "��";
	}
	void eat()
	{
		cout << "����" << endl;
	}
};
class Child : public Parent
{
public:
	void showFamilyName()
	{
		cout << "�츮�� ���� : " << familyName << endl;
	}
};

int main()
{
	Child c1;
	c1.showFamilyName();
	c1.eat();
}