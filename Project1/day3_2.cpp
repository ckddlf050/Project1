// ���ǹ�
#include<iostream>
#include<bitset>
using namespace std;

int main()
{
	//int myInput;
	//cin >> myInput;

	//switch (myInput)
	//{
	//case 1:
	//	cout << "1�̳׿�" << endl;
	//	break;

	//case 2:
	//	cout << "2�׿�" << endl;
	//	break;
	//default:
	//	cout << "�׿�" << endl;

	//}

	//���� ������
	// ���� ? ���ϋ�: ������ �� ����

	//int age;
	//cout << "���̸� �Է��ϼ���. ";
	//cin >> age;

	//if (age < 8)
	//{
	//	cout << "����";
	//}
	//else if (age < 14)
	//{
	//	cout << "�ʵ��л�";
	//}
	//else if (age < 17)
	//{
	//	cout << "���л�";
	//}
	//else if (age < 20)
	//{
	//	cout << "����л�";
	//}
	//else if (age >= 20)
	//{
	//	cout << "����";
	//}
	//else if (age >= 200)
	//{
	//	cout << "���̰� �ʹ� �����ϴ�..!";
	//}

	//�ǽ�2
	//cout << "�̸��� �Է��ϼ���";
	//string name;
	//cin >> name;

	//if (name == "ȫ�浿")
	//{
	//	cout << "����";
	//}
	//else if (name == "������")
	//{
	//	cout << "����";
	//}
	//else
	//{
	//	cout << "�𸣰ھ��";
	//}

	//�ǽ� 3
	//int num;
	//cout << "���ڸ� �Է����ּ���" << endl;
	//cin >> num;
	//bool a = (num % 5 == 0);
	//cout << num << (a ? "�� 5�� ����Դϴ�" : "�� 5�� ����� �ƴϳ׿�");

	// �ǽ� 4

	int a,b;
	char c;
	cout << "������ ���� �ΰ��� �Է��� �ּ���" << endl;
	cin >> a >> b;
	cout << "�����ڸ� �Է����ּ���.(+ - * /)" << endl;
	cin >> c;
	cout << "*****������--->";

	switch (c)
	{
		case '+':
			cout << "��� : "<< a+b << endl;
			break;
		case '-':
			cout << "��� : " << a - b << endl;
			break;
		case '*':
			cout << "��� : " << a * b << endl;
			break;
		case '/':
			if (b != 0)
			{
				cout << "��� : ����" << a / b << "��������" << a % b << endl;
			}
			else
				cout << "0���� ������ �����" << endl;
			break;
		default:
			cout << "�����ڰ� �ƴϿ���.";
	}
	
	


}
