#include<iostream>
#include<memory>
using namespace std;


//template <typename T>
//T add(T a, T b)
//{
//	return a + b;
//}
//int main()
//{
//	cout << add(10, 20) << endl;
//	cout << add(2.5, 3.4) << endl; // 자동으로 자료형을 추론해줌
//	cout << add<int>(10, 15.5) << endl; // 자료형을 직잡 지정해줄 수 있다
//	cout << add("가나다", "마바사") << endl;
//
//}

// 클래스 적용
//template <typename T>
//class Test
//{
//public:
//	T data;
//	Test(T d) : data(d) {}
//	
//};
//int main()
//{
//	Test<string> t1("테스트 데이터"); // 클래스의 경우 문자열 지정해줘야함
//	Test<int> t2(100);
//	cout << t1.data << endl;
//	cout << t2.data << endl;
//}
//template <typename T>
//class Parent 
//{
//public:
//	T data;
//	Parent(T d):data(d){}
//	void show()
//	{
//		cout << data << endl;
//	}
//};
//
//
//template <typename T>
//class Child : public Parent<T>
//{
//public:
//	Child(T d) : Parent<T>(d){}
//};
//int main()
//{
//	Child<int> c1(100);
//	Child<string> c2("문자열");
//	c1.show();
//}

//실습
//template <typename T1,typename T2>
//class Pair
//{
//private:
//	T1 first;
//	T2 second;
//public:
//	Pair(T1 f, T2 s) : first(f),second(s) {}
//	void show() 
//	{
//		cout << "first: " << first << ", second: " << second << endl;
//	}
//	T1 getFirst()
//	{
//		return first;
//	}
//
//	T2 getSecond()
//	{
//		return second;
//	}
//
//	void setFirst(T1 f)
//	{
//		first = f;
//	}
//	void setSecond(T2 s)
//	{
//		second = s;
//	}
//};
//	
//
//int main()
//{
//	Pair <int, string> p1(10, "Hello");
//	p1.show();
//
//	p1.setFirst(15);
//	p1.setSecond("world");
//
//	p1.show();
//}

// 포인터 문법
//class Car
//{
//public:
//	void show()
//	{
//		cout << "ㅇㄹㄹ" << endl;
//	}
//};
//unique_ptr<Car> createCar()
//{
//	return make_unique<Car>();
//}
//class Parent
//{
//public:
//	virtual void show()
//	{
//		cout << "부모 클래스" << endl;
//	}
//};
//class Child : public Parent
//{
//public:
//	void show()
//	{
//		cout << "자식 클래스" << endl;
//	}
//	void eat()
//	{
//		cout << "많이먹" << endl;
//	}
//};
//int main()
//{
//	//int a = 10;
//	//int* plnt = new int(10);
//	//delete plnt;
//
//	//unique_ptr<Car> smartPtr = make_unique<Car>();
//	//shared_ptr<Car> smartPtr = make_shared<Car>();//shared >> 다운캐스팅할때 사용
//	//smartPtr->show();
//	//unique_ptr<int> smartPtr = make_unique<int>;
//	//unique_ptr<int> smartPtr2 = move(smartPtr); // move를 통해 소유권 이전가능
//	//cout << *smartPtr << endl;
//	/*shared_ptr<Child> child = make_shared<Child>();*/
//	shared_ptr<Parent> parent = make_shared<Child>(); // 업캐스팅// parent* 
//	//부모에 자식이 담김
//	
//	shared_ptr<Child> child = dynamic_pointer_cast<Child>(parent); // 다운캐스팅
//	child->eat();
//
//}

