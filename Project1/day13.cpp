#include<iostream>
using namespace std;

//class Car
//{
//private:
//	string brand;
//	
//
//public:
//	int speed;
//	void showBrand() const // ��ȣ��ġ (����Ұ�)
//	{
//		brand = "Hyundai";
//		cout << "�귣��� : " << brand << endl;
//	}
//};
//int main()
//{
//	const Car c1;	//const�� ���� �ܺο��� ���ٵ� �Ұ���!
//	c1.speed=100;
//}

//���

//class Parent
//{
//public:
//	string familyName;
//
//	void shwoFamilyName()
//	{
//		cout << "�츮�� ���� : " << familyName << endl;
//	}
//};
//class Child : public Parent {
//
//};
//int main()
//{
//	Child c1;
//	c1.familyName="��";
//	c1.shwoFamilyName();
//}

//�ǽ�1. ��� ����-shape

//class Shape
//{
//protected:
//	int sides;
//	int base;
//
//public:
//	Shape(int s,int b):sides(s),base(b) {}
//
//	void printInfo()
//	{
//		cout << "���� ���� : " << sides << ", �غ��� ���� : " << base << endl;
//	}
//};
//// �ڽ�Ŭ����(�簢��)
//class Rectangle : public Shape
//{
//private:
//	int length;
//public:
//	Rectangle(int b,int l) : Shape(4,b),length(l){}
//	void area()
//	{
//		cout << "�簢���� ���� : " << (base * length) << endl;
//	}
//};
//
//class Triangle : public Shape
//{
//private:
//	int height;
//public:
//	Triangle(int b, int h) : Shape(3, b), height(h) {}
//	void area()
//	{
//		cout << "�ﰢ���� ���� : " << (0.5 * base * height) << endl;
//	}
//};
//int main()
//{
//	Rectangle r1(10, 5);
//	r1.printInfo();
//	r1.area();
//	
//	Triangle t1(10, 5);
//	t1.printInfo();
//	t1.area();
//
//}

//�ǽ� 2. ��۰� ���� ������
//class Vehicle
//{
//protected:
//	int speed;
//public:
//	string brand;
//
//	Vehicle(string b, int s) : brand(b), speed(s){}
//	void showInfo()
//	{
//		cout << "�귣�� �̸� : " << brand << ", �ӵ� : " << speed << "km / h" << endl;
//	}
//};
//class Car : public Vehicle
//{
//private:
//	int passenger;
//
//public:
//	Car(string b, int s, int p) : Vehicle(b, s), passenger(p){}
//	void showPassenger()
//	{
//		cout << "�°��� : " << passenger << "��" << endl;
//	}
//};
//class Truck : public Vehicle
//{
//private:
//	int capacity;
//
//public:
//	Truck(string b, int s, int c) : Vehicle(b, s), capacity(c) {}
//	void showCapacity()
//	{
//		cout << "���� �뷮 : " << capacity << "kg" << endl;
//	}
//};
//int main() {
//	
//	Car c1("Hyundai", 120, 5);
//	c1.showInfo();
//	c1.showPassenger();
//
//	cout << endl;
//
//	Truck t1("Volvo", 90, 5000);
//	t1.showInfo();
//	t1.showCapacity();
//}

//�����ε�
//class calc
//{
//public:
//
//	int add(int a, int b)
//	{
//		cout << "�ΰ� ���ϱ� :";
//		return a + b;
//	}
//	int add(int a, int b, int c)
//	{
//		cout << "���� ���ϱ� :";
//		return a + b + c;
//	}
//};
//
//int main()
//{
//	calc c1;
//	cout << c1.add(30, 50) << endl;
//	cout << c1.add(30, 50,100) << endl;
//}

// �ǽ� 1. �Լ� �����ε�- ���� ����

//class Shape
//{
//public:
//	int area(int side)
//	{
//		cout << "���簢���� ����: ";
//		return side * side;
//	}
//	int area(int width, int height)
//	{
//		cout << "���簢���� ���� :";
//		return width * height;
//	}
//	int area(double radius)
//	{
//		cout << "���� ����: ";
//		return 3.14159 * radius * radius;
//	}
//};
//int main()
//{
//	Shape s1;
//	cout << s1.area(5)<<endl;
//	cout << s1.area(5,2)<<endl;
//	cout << s1.area(5.0) << endl;;
//}

//������ �����ε�
//class  Weight
//{
//public:
//	int kg;
//	Weight(int w) : kg(w) {};
//	Weight* operator +(Weight& other)
//	{
//		this->kg += other.kg;
//		return this;
//	}
//	void showWeight()
//	{
//		cout << "�����Դ�: " << kg << "�Դϴ�" << endl;
//	}
//};
//int main()
//{
//	Weight w1(100), w2(150);
//	(w1 + w2)->showWeight();
//}


//�ǽ�2. ������ �����ε� - ��ǥ����

class Point
{
private:
	int x, y;

public:
	Point(int x = 0, int y = 0) : x(x), y(y) {};
	Point* operator+(Point& other)
	{
		x += other.x;
		y += other.y;
		return this;
	}
	void showPoint() 
	{
		cout << " �� ���� Point�� ���� : " <<x<< "," << y << endl;
	}
};

int main()
{
	Point p1(3, 5);
	Point p2(2, 10);


	(p1+p2)->showPoint();
}