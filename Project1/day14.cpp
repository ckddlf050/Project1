#include<iostream>
using namespace std;
#include<string>

//class Animal	//�߻� Ŭ����
//{
//public:
//	virtual void speak() = 0; // ���� �����Լ�(a.k.a �߻�޼ҵ�)
//	//{
//	//	cout << "���� �Ҹ��� ���ϴ�" << endl;
//	//}
//	//virtual void tailSwing() = 0;
//};
//class Dog :public Animal
//{
//public:
//	void speak() override
//	{
//		cout << "�۸�" << endl;
//	}
//	//void tailSwing() override
//	//{
//	//	cout << "������" << endl;
//	//}
//	};
//	
//		
//class Dinosaur :public Animal
//{
//public:
//	void speak() override
//	{
//		cout << "�׸�" << endl;
//	}
//};
//
//int main()
//{
//	// Animal animal; // �߻�Ŭ������ �ν��Ͻ��� ������ ����!
//	//Dog dog;
//	//dog.speak();
//	Animal* animal=nullptr;//Anmai Ŭ���� ������ ���� ����
//	//Dog dog;// ���� �ν��Ͻ� ����
//	//Dinosaur dino;//���� �ν��Ͻ� ����
//	//animal = &dog;// ���� �ν��Ͻ� �ּ� �ʱ�ȭ(
//	string choice;
//	cin >> choice;
//	if (choice == "������")
//	{
//		animal = new Dog();
//	}
//	else
//	{
//		animal = new Dinosaur();
//	}
//
//	animal->speak();
//	delete animal;
//	//animal->tailSwing();
//}
//
// 
// �ǽ�3 �������̵�- �ڵ��� ���� ��� ����
//class Vehicle
//{
//protected:
//	int speed;
//public:
//	
//	virtual void accelerate() = 0;
//};
//class Car : public Vehicle
//{
//public:
//	void accelerate() override
//	{
//		speed += 5;
//		cout << "�Ϲ��ڵ��� �ü� " << speed << " ����" << endl;
//	}
//};
//class SportsCar : public Vehicle
//{
//public:
//	void accelerate() override
//	{
//		speed += 10;
//			cout << "������ī �ü� " << speed << " ����" << endl;
//	}
//};
//class Truck : public Vehicle
//{
//public:
//	void accelerate() override
//	{
//		speed += 15;
//		cout << "Ʈ�� �ü� " << speed <<" ����" << endl;
//	}
//};
//int main()
//{
//	Vehicle* v = nullptr;
//	cout <<"�ڵ��� ������ �����ϼ��� :\n" << "1. Car (�Ϲ� �ڵ���) \n" << "2. SportsCar (������ī) \n" << "3. Truck(Ʈ��) \n" << "�Է� : ";
//	int choice;
//
//	cin>> choice;
//
//	if (choice == 1)
//	{
//		v = new Car();
//	}
//	else if (choice == 2)
//	{
//		v = new SportsCar();
//	}
//	else if (choice == 3)
//	{
//		v = new Truck();
//	}
//	
//	v->accelerate();
//	delete v;
//}


//�ǽ� 4. ����,����,���ݸ�
//class Snack
//{
//protected:
//	string productName, company;
//	int price;
//public:
//	Snack(string n, string c, int p) : productName(n), company(c), price(p){}
//	virtual void printInfo() = 0;
//};
//class Candy : public Snack
//{
//
//private:
//	string taste;
//public:
//	Candy(string n, string c,int p,string t) : Snack(n,c,p),taste(t) {}
//	void printInfo() override
//	{
//		cout << "ĵ�� " << productName << "\n������ :" << company << "\n���� : " << price << "\n�� : " << taste << endl;
//	}
//};
//class Chocolate : public Snack
//{
//private:
//	string shape;
//public:
//	Chocolate(string n, string c, int p, string s) : Snack(n, c, p), shape(s) {}
//	void printInfo() override
//	{
//		cout << "���ݷ� " << productName << "\n������ :" << company << "\n���� : " << price << "\n��� : " << shape << endl;
//	}
//};
//int main()
//{
//	Snack* snackBasket[4];
//
//	snackBasket[0] = new Candy("û���� ����", "�Ե�", 500, "û����");
//	snackBasket[1] = new Candy("��īġ ĵ��", "�Ե�", 1000, "Ŀ��");
//
//	snackBasket[2] = new Chocolate("����", "�Ե�", 1500, "�׸�");
//	snackBasket[3] = new Chocolate("�䷹�ην�", "�䷹��", 2000, "��");
//	for (int i = 0; i < 4; i++)
//	{
//		snackBasket[i]->printInfo();
//	}
//	for (int i = 0; i < 4; i++)
//	{
//		delete snackBasket[i];
//	}
//	return 0;
//}

// �ǽ� 5  AIê�� �ý��� ����

//class ChatBot
//{
//public:
//	virtual void respond(string message) = 0;
//};
//class CustomerSupportBot : public ChatBot
//{
//public:
//	void respond(string message) override
//	{
//		cout << "�� ���� ���Ǹ� ó�� �մϴ� : " << message << endl;
//	}
//};
//class WeatherBot : public ChatBot
//{
//public:
//	void respond(string message) override
//	{
//		cout << "���� ���� ������ ���� �մϴ� : " << message << endl;
//	}
//};
//
//int main()
//{
//	ChatBot* c = nullptr;
//	int choice;
//	string input;
//
//	cout << "����� ê�� ����" << endl;
//	cout << "1. �� ���� �� " << endl;
//	cout << "2. ���� ��" << endl;
//	cout << "�Է�:";
//	cin >> choice;
//	cin.ignore();
//	cout << "������ ������ �Է��ϼ��� : ";
//
//	getline(cin, input);
//	if (choice == 1)
//	{
//		c = new CustomerSupportBot;
//	}
//	else if (choice == 2)
//		c = new WeatherBot;
//	c->respond(input);
//	delete c;
//}

//// �ַ��
//#include <iostream>
//#include <vector>
//#include <string>
//using namespace std;
//
//class Chatbot {
//public:
//	virtual void respond(string message) = 0;
//};
//
//class CustomerSupportBot : public Chatbot {
//public:
//	void respond(string message) override {
//		cout << "[��������] ������ ���Ǹ� ó���մϴ�: " << message << endl;
//		// ä�� ����� ���� �߰� ���� ����
//	}
//};
//
//class WeatherBot : public Chatbot {
//public:
//	void respond(string message) override {
//		cout << "[������] ���� ���� ������ �����ҰԿ�: " << message << endl;
//	}
//};
//
//int main() {
//	Chatbot* chatbot = nullptr;
//	int choice;
//	string userMessage;
//
//	cout << "������ ê���� �������ּ���:" << endl;
//	cout << "1. �� ���� ��" << endl;
//	cout << "2. ���� ��" << endl;
//	cout << "�� ����: ";
//	cin >> choice; // �Է� �ڿ� \n�� ����...
//	cin.ignore();
//
//	switch (choice) {
//	case 1:
//		chatbot = new CustomerSupportBot();
//		break;
//	case 2:
//		chatbot = new WeatherBot();
//		break;
//	default:
//		cout << "�Է��� �߸��ؼ� �׳� �⺻����" << endl;
//		chatbot = new CustomerSupportBot();
//	}
//
//	cout << "ä���� �����մϴ�('exit'�� �Է��ϸ� ����˴ϴ�)" << endl;
//	while (true) {
//		cout << "�����: ";
//		getline(cin, userMessage);
//
//		if (userMessage == "exit") {
//			cout << "��ȭ�� �����մϴ�" << endl;
//			break;
//		}
//
//		chatbot->respond(userMessage);
//	}
//
//	delete chatbot;
//}