#include<iostream>
using namespace std;
#include<string>

//class Animal	//추상 클래스
//{
//public:
//	virtual void speak() = 0; // 순수 가상함수(a.k.a 추상메소드)
//	//{
//	//	cout << "동물 소리를 냅니다" << endl;
//	//}
//	//virtual void tailSwing() = 0;
//};
//class Dog :public Animal
//{
//public:
//	void speak() override
//	{
//		cout << "멍멍" << endl;
//	}
//	//void tailSwing() override
//	//{
//	//	cout << "살랑살랑" << endl;
//	//}
//	};
//	
//		
//class Dinosaur :public Animal
//{
//public:
//	void speak() override
//	{
//		cout << "그릉" << endl;
//	}
//};
//
//int main()
//{
//	// Animal animal; // 추상클래스는 인스턴스를 가질수 없다!
//	//Dog dog;
//	//dog.speak();
//	Animal* animal=nullptr;//Anmai 클래스 포인터 변수 생성
//	//Dog dog;// 도그 인스턴스 생성
//	//Dinosaur dino;//공룡 인스턴스 생성
//	//animal = &dog;// 도그 인스턴스 주소 초기화(
//	string choice;
//	cin >> choice;
//	if (choice == "강아지")
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
// 실습3 오버라이딩- 자동차 가속 기능 구현
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
//		cout << "일반자동차 시속 " << speed << " 증가" << endl;
//	}
//};
//class SportsCar : public Vehicle
//{
//public:
//	void accelerate() override
//	{
//		speed += 10;
//			cout << "스포츠카 시속 " << speed << " 증가" << endl;
//	}
//};
//class Truck : public Vehicle
//{
//public:
//	void accelerate() override
//	{
//		speed += 15;
//		cout << "트럭 시속 " << speed <<" 증가" << endl;
//	}
//};
//int main()
//{
//	Vehicle* v = nullptr;
//	cout <<"자동차 유형을 선택하세요 :\n" << "1. Car (일반 자동차) \n" << "2. SportsCar (스포츠카) \n" << "3. Truck(트럭) \n" << "입력 : ";
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


//실습 4. 과자,사탕,초콜릿
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
//		cout << "캔디 " << productName << "\n제조사 :" << company << "\n가격 : " << price << "\n맛 : " << taste << endl;
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
//		cout << "초콜렛 " << productName << "\n제조사 :" << company << "\n가격 : " << price << "\n모양 : " << shape << endl;
//	}
//};
//int main()
//{
//	Snack* snackBasket[4];
//
//	snackBasket[0] = new Candy("청포도 사탕", "롯데", 500, "청포도");
//	snackBasket[1] = new Candy("스카치 캔디", "롯데", 1000, "커피");
//
//	snackBasket[2] = new Chocolate("가나", "롯데", 1500, "네모");
//	snackBasket[3] = new Chocolate("페레로로쉐", "페레로", 2000, "원");
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

// 실습 5  AI챗봇 시스템 설계

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
//		cout << "고객 지원 문의를 처리 합니다 : " << message << endl;
//	}
//};
//class WeatherBot : public ChatBot
//{
//public:
//	void respond(string message) override
//	{
//		cout << "현재 날씨 정보를 제공 합니다 : " << message << endl;
//	}
//};
//
//int main()
//{
//	ChatBot* c = nullptr;
//	int choice;
//	string input;
//
//	cout << "사용할 챗봇 선택" << endl;
//	cout << "1. 고객 지원 봇 " << endl;
//	cout << "2. 날씨 봇" << endl;
//	cout << "입력:";
//	cin >> choice;
//	cin.ignore();
//	cout << "문의할 내용을 입력하세요 : ";
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

//// 솔루션
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
//		cout << "[고객지원봇] 고객님의 문의를 처리합니다: " << message << endl;
//		// 채팅 기능을 위한 추가 세부 구현
//	}
//};
//
//class WeatherBot : public Chatbot {
//public:
//	void respond(string message) override {
//		cout << "[날씨봇] 현재 날씨 정보를 제공할게요: " << message << endl;
//	}
//};
//
//int main() {
//	Chatbot* chatbot = nullptr;
//	int choice;
//	string userMessage;
//
//	cout << "실행할 챗봇을 선택해주세요:" << endl;
//	cout << "1. 고객 지원 봇" << endl;
//	cout << "2. 날씨 봇" << endl;
//	cout << "봇 선택: ";
//	cin >> choice; // 입력 뒤에 \n가 남아...
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
//		cout << "입력을 잘못해서 그냥 기본으로" << endl;
//		chatbot = new CustomerSupportBot();
//	}
//
//	cout << "채팅을 시작합니다('exit'를 입력하면 종료됩니다)" << endl;
//	while (true) {
//		cout << "사용자: ";
//		getline(cin, userMessage);
//
//		if (userMessage == "exit") {
//			cout << "대화를 종료합니다" << endl;
//			break;
//		}
//
//		chatbot->respond(userMessage);
//	}
//
//	delete chatbot;
//}