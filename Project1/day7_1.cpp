#include<iostream>
using namespace std;

//int main()
//{
//	int i = 0; //4바이트
//	float f = 3.14f; // 4바이트
//	short s = 100; // 2바이트
//	int* iPtr = &i; //참조 << 포인트변수 선언
//	int* Ptr = nullptr;//어떤 변수도 가리키지 않는 포인터
//	short* sPtr = &s;
//	cout << "메모리 주소:" << sizeof(iPtr) << endl;
//	cout << "s메모리 주소:" << sizeof(*sPtr) << endl;
//	//cout << "메모리에 주소 : " << iPtr << endl; // 역참조
//	//cout << "메모리에 저장된 값 : "<< * iPtr << endl; // 역참조
//}

int main()
{
	//int i = 0;
	//int* iPtr = &i;

	//short s = 100;
	//short* sPtr = &s;

	//int iArr[4] = { 10,20,30,40 };

	//cout << *iArr << endl;
	//cout << *(iArr+2) << endl;
	//cout << sizeof(iArr) << endl;
	//cout << iPtr + 1 << endl;
	//cout << iPtr  << endl;

//	char cArr[4] = { 1,1,1,1 };
//	short* shortPtr = (short*)cArr;
//	short sData = *(shortPtr + 1);
//	cout << (int)sData << endl;


	//int a = 10;
	//int b = 20;
	//int* arr[2] = { &a,&b };
	//cout << *arr[0] << "    " << *arr[1];
//예제
	//short sArr[6] = {256,257,258,259,260,261};
	//char* pC = (char*)sArr;
	//char cData = *(pC+ 3);
	//cout << (int)cData << endl;

//const와 포인터
	//const int iVar = 0; // read-only
	//int  myVar = 100;

	//int i = 100;
	//// 1. 바라보고 있는 주소의 값(int)을 바꾸는걸 방지
	//// 1) const가 int를  값이 변하는것을 방지함
	//const int* iPtr = &i;
	////*iPtr = 200;  //불가능
	///**iPtr = &i;*/	  // 가능

	//// 2. 바라보는 주소를 바꾸는걸 방지
	//// 주소가 담겨있는 포인터가 바뀌는것을 방지
	//int* const iPtr2 = &i;
	//*iPtr2 = 200;	//가능
	///**iPtr2 = &i;	*/	//불가능

	//// 3. 둘다방지
	//const int* const iPtr3 = &i;
	///**iPtr2 = 200;*/	//불가능
	///**iPtr2 = &i*/		//불가능



}