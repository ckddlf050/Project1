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
//	cout << add(2.5, 3.4) << endl; // �ڵ����� �ڷ����� �߷�����
//	cout << add<int>(10, 15.5) << endl; // �ڷ����� ���� �������� �� �ִ�
//	cout << add("������", "���ٻ�") << endl;
//
//}

// Ŭ���� ����
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
//	Test<string> t1("�׽�Ʈ ������"); // Ŭ������ ��� ���ڿ� �����������
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
//	Child<string> c2("���ڿ�");
//	c1.show();
//}

//�ǽ�
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

// ������ ����
//class Car
//{
//public:
//	void show()
//	{
//		cout << "������" << endl;
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
//		cout << "�θ� Ŭ����" << endl;
//	}
//};
//class Child : public Parent
//{
//public:
//	void show()
//	{
//		cout << "�ڽ� Ŭ����" << endl;
//	}
//	void eat()
//	{
//		cout << "���̸�" << endl;
//	}
//};
//int main()
//{
//	//int a = 10;
//	//int* plnt = new int(10);
//	//delete plnt;
//
//	//unique_ptr<Car> smartPtr = make_unique<Car>();
//	//shared_ptr<Car> smartPtr = make_shared<Car>();//shared >> �ٿ�ĳ�����Ҷ� ���
//	//smartPtr->show();
//	//unique_ptr<int> smartPtr = make_unique<int>;
//	//unique_ptr<int> smartPtr2 = move(smartPtr); // move�� ���� ������ ��������
//	//cout << *smartPtr << endl;
//	/*shared_ptr<Child> child = make_shared<Child>();*/
//	shared_ptr<Parent> parent = make_shared<Child>(); // ��ĳ����// parent* 
//	//�θ� �ڽ��� ���
//	
//	shared_ptr<Child> child = dynamic_pointer_cast<Child>(parent); // �ٿ�ĳ����
//	child->eat();
//
//}

