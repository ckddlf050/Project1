#include<iostream>
using namespace std;

//int main()
//{
//	int i = 0; //4����Ʈ
//	float f = 3.14f; // 4����Ʈ
//	short s = 100; // 2����Ʈ
//	int* iPtr = &i; //���� << ����Ʈ���� ����
//	int* Ptr = nullptr;//� ������ ����Ű�� �ʴ� ������
//	short* sPtr = &s;
//	cout << "�޸� �ּ�:" << sizeof(iPtr) << endl;
//	cout << "s�޸� �ּ�:" << sizeof(*sPtr) << endl;
//	//cout << "�޸𸮿� �ּ� : " << iPtr << endl; // ������
//	//cout << "�޸𸮿� ����� �� : "<< * iPtr << endl; // ������
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
//����
	//short sArr[6] = {256,257,258,259,260,261};
	//char* pC = (char*)sArr;
	//char cData = *(pC+ 3);
	//cout << (int)cData << endl;

//const�� ������
	//const int iVar = 0; // read-only
	//int  myVar = 100;

	//int i = 100;
	//// 1. �ٶ󺸰� �ִ� �ּ��� ��(int)�� �ٲٴ°� ����
	//// 1) const�� int��  ���� ���ϴ°��� ������
	//const int* iPtr = &i;
	////*iPtr = 200;  //�Ұ���
	///**iPtr = &i;*/	  // ����

	//// 2. �ٶ󺸴� �ּҸ� �ٲٴ°� ����
	//// �ּҰ� ����ִ� �����Ͱ� �ٲ�°��� ����
	//int* const iPtr2 = &i;
	//*iPtr2 = 200;	//����
	///**iPtr2 = &i;	*/	//�Ұ���

	//// 3. �Ѵٹ���
	//const int* const iPtr3 = &i;
	///**iPtr2 = 200;*/	//�Ұ���
	///**iPtr2 = &i*/		//�Ұ���



}