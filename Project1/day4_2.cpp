#include<iostream>
#include<bitset>
using namespace std;

int main()
{
	//int numbers[5] = {10,20,30,40,50};
	//// �ε���: �迭�̸�[�ε�����ȣ]
	//for (int i = 0; i < 5; i++)
	//{
	//	cout << numbers[i] << endl;
	//}
	
	// ������ �迭
	//string words[2][2] = { {"��","��"},{"��","��"} };
	//cout << words[0][0];

	// for each��
	//int numbers[4] = {10,20,30,40};
	//for (int num : numbers)
	//{
	//	cout << num << endl;
	//}

	// �ǽ� 2 : �迭����(2) 
	//  city2 ��� �迭 ������ �����ϰ�, 5���� ���� �̸��� ����ڰ� �ֿܼ� �Է��� ������ ����
	//string city2[5] = {};
	//for (int i = 0; i < 5; i++)

	//{
	//	cout << "���� �Է����ּ��� : " ;
	//	cin >> city2[i];
	//}
	//for (string c2 : city2)
	//{
	//	cout << c2 << " ";
	//}

	//�迭 ���� (3)
	//(1) grade ��� �迭 ������ �����ϰ�, �л� 5���� ���� �Է¹ޱ�
	//(2) for�� Ȥ�� for - each���� Ȱ���Ͽ� �л� 5���� ���� ��� ����

	int grades[5] = {};
	int sum = 0;
	double average;
	for (int i = 0; i < 5; i++)
	{
		cout << i + 1 << "�� �л��� ������ �Է��ϼ���: ";
		cin >> grades[i];
	}
	for (int grade : grades)
	{
		sum += grade;
	}
	average = (double)sum / 5;
	cout << "���� ��� :" << average;
}