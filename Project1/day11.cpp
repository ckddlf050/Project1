#include<iostream>
using namespace std;
// C++ ��Ÿ��
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
//		cout << name << "�л��� �������Դϴ�"<< endl;
//	}
//};	// MyPerson;	//Alias(��Ī)

//int main()
//{
//	//Person p1 = {"ci",28,"����"};	//�ڷ��� ������ ��
//	/*p1.name = "ci";
//	p1.adrress = "����";
//	p1.age = 28;*/
//
//	//cout << "�̸�: " << p1.name << endl;
//	//cout << "�ּ�: " << p1.adrress << endl;
//	//cout << "����: " << p1.age << endl;
//	
//	//Person p1 = { "ci",28, {"����","�̵��̵�"} };
//	//cout << "�̸�" << p1.name << endl;
//	//cout << "����" << p1.age << endl;
//	//cout << "�ּ�" << p1.addr.street << endl;
//
//}

// �ǽ� 1. ����ü ����غ���
//struct Rectangle
//{
//	int width;
//	int height;
//
//	void getArea() {
//		cout << "���̴� : " << (width * height);
//	}
//	//int a1() { return width * height; } 
//};
//struct Point
//{
//	int x;
//	int y;
//	void add(const Point& other)
//	{
//		cout << "��ǥ�� ���� : " << (x+ other.x) << ", " << (y+other.y) << endl;
//	}
//};
//
//int main()
//{
//	//Rectangle r1;
//	//cout << "�簢���� ���� ���θ� �Է��ϼ��� :";
//	//cin >> r1.width >> r1.height;
//	//
//	//r1.getArea();
//	
//	Point p1,p2;
//	cout << "ù��° ��ǥ x, y : ";
//	cin >> p1.x >> p1.y;
//	cout << "�ι�° ��ǥ x, y : " ;
//	cin >> p2.x >> p2.y;
//
//	p1.add(p2);
//}

// Ŭ���� 
//class Car 
//{
//public:
//	string brand;
//	int speed;
//
//	void drive()
//	{
//		cout << brand << "��" << speed << "km/h�� �����մϴ�." << endl;
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
//		//cout << "�̸��� �Է��� �ּ��� :" ;
//		//cin >> name;
//	}
//	void setAge()
//	{
//		this->age = age;
//	/*	cout << "���̸� �Է��� �ּ��� :" ;
//		cin >> age;*/
//	}
//	void showinfo()
//	{
//		cout << "�̸� : " << name << " ���� : " << age;
//	}
//};
//
//int main()
//{
//	Person p1 = {"â��",25};
//	//p1.setName();
//	//p1.setAge();
//	p1.showinfo();
//}

// �ǽ� 3.Ŭ���� ����غ���(3) - ����
//1. accountNumber(���¹�ȣ), balance(�ܾ�)�� ��� ������ ������ BankAccount Ŭ���� �ۼ�
//2. �����ڿ��� ���¹�ȣ�� �ʱ� �ܾ��� ����
//3. deposit(int amount), withdraw(int amount) ��� �Լ� �߰�
//4. �Ҹ��ڿ��� "���� ������: [���¹�ȣ]" ���

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