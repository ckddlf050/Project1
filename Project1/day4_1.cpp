#include<iostream>
using namespace std;
// �ݺ��� for while 

int main()
{
	//for (int i = 0; i < 5; i++)
	//{
	//	cout << "�ݺ�" << i << endl;
	//}

	//int i = 5;
	//do
	//{
	//	i++;
	//} while (i < 5);
	//
	//cout << i << endl;

	//// ���� 1
	//// �Է��� ���ڸ�ŭ �����
	//int n;
	//cout << "input : ";
	//cin >> n;
	//for (int i = 1; i <= n; i++) 
	//{
	//	for (int j = 0; j < i; j++) 
	//	{
	//		cout << "*";
	//	}
	//	cout << endl;
	//}
	//
	////����1_1 ������ �����

	//for (int i = 0; i <= n; i++)
	//{
	//	cout << string(n - i, ' ') << string(i, '*') << endl;
	//}

	// ���� 2. ������ �����
	// (1) 5�ܸ� ���

	//cout << "5�����" << endl;
	//for (int i = 1; i <= 9; i++) 
	//{
	//	cout << "5 * " << i << "="  << 5 * i << endl;
	//}

	//// ���� 2
	//cout << "1~9�� ���" << endl;
	//for (int i = 1; i <= 9; i++)
	//{
	//	cout << "----" << i << "��----" << endl;

	//	for (int j = 1; j <= 9; j++) 
	//	{
	//		cout << i << " * " << j << " = " << i * j << endl;
	//	}
	//}

	// ���� 4
	// ����ڰ� �Է��� ���� ���ϱ�

	//cout << "����ڰ� �Է��� ���� ���ϱ�" << endl;
	//int answer = 0;
	//while (true)
	//{
	//	int num;
	//	cout << "���ڸ� �Է��ϼ��� (0: exit):";
	//	cin >> num;
	//	if (num == 0) break;
	//	answer += num;
	//}
	//cout << "����ڰ� �Է��� ���� ���� : " << answer << endl;

	// ��Ʈ���� �ǽ� ����
	// �ǽ�4 ��� ����
	/*int num4;
	cout << "Q4. ������ ���ڸ� �Է����ּ���:";
	cin >> num4;
	bool isSet = (num4 & (1 << 4)) != 0;
	cout << "Q4. ����: " << (isSet ? 1 : 0) << endl;*/
	// ����7, ���� ���ʿ� �ִ� 1��Ʈ�� ��ġ ã��	
	//int num7;
	//int position = 0;
	//cout << "������ ���ڸ� �Է����ּ��� :";
	//cin >> num7;

	//for (int i = 7; i >= 0; i--)
	//{
	//	if (num7 & (i << i))
	//	{
	//		position = i;
	//		break;
	//	}
	//}
	//cout << "���� ������ 1�� ��ġ�� �ڸ�: " << position;

	// ���� 8
	int num8;
	int position = 0;
	cout << "������ ���ڸ� �Է����ּ��� :";
	cin >> num8;

	if (num8 == 0)
	{
		cout << "�Է��� 0�̳׿�";
	}
	else
	{
		for (int i = 0; i < sizeof(num8) * 8; i++)
		{
			if (num8 & (1 << i))
			{
				position = i;
				break;
			}
		}
		cout << "���� ������ 1�� ��ġ�� �ڸ�" << position;
	}
	/*for (int i = 0; i <= sizeof(num8)*8-1; i++)
	{
		if (num8 & (i << i))
		{
			position = i;
			break;
		}
	}
	cout << "���� ������ 1�� ��ġ�� �ڸ�: " << position;*/

}