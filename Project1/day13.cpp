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
//	void showBrand() const // 보호장치 (변경불가)
//	{
//		brand = "Hyundai";
//		cout << "브랜드는 : " << brand << endl;
//	}
//};
//int main()
//{
//	const Car c1;	//const를 쓰면 외부에서 접근도 불가함!
//	c1.speed=100;
//}

//상속

//class Parent
//{
//public:
//	string familyName;
//
//	void shwoFamilyName()
//	{
//		cout << "우리의 성은 : " << familyName << endl;
//	}
//};
//class Child : public Parent {
//
//};
//int main()
//{
//	Child c1;
//	c1.familyName="이";
//	c1.shwoFamilyName();
//}

//실습1. 상속 연습-shape

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
//		cout << "변의 개수 : " << sides << ", 밑변의 길이 : " << base << endl;
//	}
//};
//// 자식클래스(사각형)
//class Rectangle : public Shape
//{
//private:
//	int length;
//public:
//	Rectangle(int b,int l) : Shape(4,b),length(l){}
//	void area()
//	{
//		cout << "사각형의 넓이 : " << (base * length) << endl;
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
//		cout << "삼각형의 넓이 : " << (0.5 * base * height) << endl;
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

//실습 2. 상송과 접근 지정자
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
//		cout << "브랜드 이름 : " << brand << ", 속도 : " << speed << "km / h" << endl;
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
//		cout << "승객수 : " << passenger << "명" << endl;
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
//		cout << "적재 용량 : " << capacity << "kg" << endl;
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

//오버로딩
//class calc
//{
//public:
//
//	int add(int a, int b)
//	{
//		cout << "두개 더하기 :";
//		return a + b;
//	}
//	int add(int a, int b, int c)
//	{
//		cout << "세개 더하기 :";
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

// 실습 1. 함수 오버로딩- 면적 계산기

//class Shape
//{
//public:
//	int area(int side)
//	{
//		cout << "정사각형의 면적: ";
//		return side * side;
//	}
//	int area(int width, int height)
//	{
//		cout << "직사각형의 면적 :";
//		return width * height;
//	}
//	int area(double radius)
//	{
//		cout << "원의 면적: ";
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

//연산자 오버로딩
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
//		cout << "몸무게는: " << kg << "입니다" << endl;
//	}
//};
//int main()
//{
//	Weight w1(100), w2(150);
//	(w1 + w2)->showWeight();
//}


//실습2. 연산자 오버로딩 - 좌표연산

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
		cout << " 두 개의 Point의 합은 : " <<x<< "," << y << endl;
	}
};

int main()
{
	Point p1(3, 5);
	Point p2(2, 10);


	(p1+p2)->showPoint();
}