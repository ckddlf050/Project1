
#include<iostream>
#include<bitset>
using namespace std;

int main() 
{
	// �ǽ� 1 Ư�� ��Ʈ ����
	int num1 = 0b00010010;
	int num1_1 = 0b00100000;
	cout << "Q1.����: " << bitset<8>(num1 | num1_1) << endl;

	int num2 = 0b10101111;
	int num2_2 = 0b00000100;
	// num2 ~&(1<<2)
	cout << "Q2.����: " << bitset<8>(num2 & ~num2_2) << endl;

	int num3 = 0b11011010;
	int num3_3 = 0b00010000;
	//num3 ^=(1<<4)
	cout << "Q3.����: " << bitset<8>(num3  ^num3_3) << endl;

	int num4;
	cout << "Q4.������ ���ڸ� �Է����ּ���:";
	cin >> num4;
	cout << "Q4.����" << ((num4 >> 4) & 0b1)  << endl;

	int num5;
	cout << "Q5.������ ���ڸ� �Է����ּ���:";
	cin >> num5;
	bool isOdd = num5 & 1;
	cout << "Q5.����" << (isOdd ? "Ȧ��" : "¦��") << endl;

	int num6;
	cout << "Q5.������ ���ڸ� �Է����ּ���:";
	cin >> num6;
	bool isPwoerOfTwo = num6 ^ (num6 - 1);
	cout << "Q6.����" << (isPwoerOfTwo ? "�ƴ�" : "2�� �ŵ�����") << endl;







    ////Q1. num = 0b00010010(10���� 18)���� 5��° ��Ʈ�� 1�� ������ ����� ����ϼ���.
    //int num1 = 0b00010010;
    //num1 |= (1 << 5);
    //cout << "Q1. ����: " << bitset<8>(num1) << endl;

    ////Q2. num = 0b10101111(10���� 175)���� 2��° ��Ʈ�� 0���� ������ ����� ����ϼ���.
    //int num2 = 0b10101111;
    //num2 & ~(1 << 2);
    //cout << "Q2. ����: " << bitset<8>(num2) << endl;

    ////Q3. num = 0b11011010(10���� 218)���� 4��° ��Ʈ�� ������Ų ����� ����ϼ���.
    //int num3 = 0b11011010;
    //num3 ^= (1 << 4);
    //cout << "Q3. ����: " << bitset<8>(num3) << endl;

    ////Q4. ������ num�� �־����� �� 4��° ��Ʈ�� �����Ͽ� ����ϼ���.
    //int num4;
    //cout << "Q4. ������ ���ڸ� �Է����ּ���:";
    //cin >> num4;
    //bool isSet = (num4 & (1 << 4));
    //cout << "Q4. ����: " << isSet << endl;

    ////Q5. ������ num�� �־����� ��, Ȧ������ ¦������ ��Ʈ �����ڷ� �Ǻ��ϼ���.
    //int num5;
    //cout << "Q5. ������ ���ڸ� �Է����ּ���:";
    //cin >> num5;
    //bool isOdd = num5 & 1;
    //cout << "Q5. ����: " << (isOdd ? "Ȧ��" : "¦��") << endl;

    ////Q6. ������ num�� �־����� ��, 2�� �ŵ��������� Ȯ���ϼ���.
    //int num6;
    //cout << "Q6. ������ ���ڸ� �Է����ּ���:";
    //cin >> num6;
    //bool isPowerOfTwo = num6 & (num6 - 1);
    //cout << "Q6. ����: " << (isPowerOfTwo ? "�ƴ�" : "2�� �ŵ�����") << endl;



}