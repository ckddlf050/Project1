#include<iostream>
#include<vector>
#include<algorithm>
#include<list>
using namespace std;

//int main()
//{
	/*vector<int> vec = { 1,2,3,4,5,6};*/
	//vector<int> vec = { 2,3,5,1,6,4,8 };
	//vector<int> vec2(5, 10);//10�� 5�� �־��� �ݺ���
	
//�ݺ��� ��ȸ
	/*for (int i = 0; i < vec.size(); i++)*/
	//for (int i = 0; i < vec.end() - vec.begin(); i++)
	//for(vector<int>::iterator it = vec.begin();it ! = vec.end();it++)
	//{
	//	cout << *it << endl;
	//}

//push back
	//vec.push_back(7); //�迭�� ���� ������ ���Ҹ� ����
	//vec.pop_back();	//������ ������ �κ� ����
	//vec.insert(vec.begin() + 3, 10);
	//vec.erase(vec.begin() + 3);

//����
	//sort(vec.begin(), vec.end());

//���� ����
	//vector<vector<int>> vec = { {1,2,3} ,{4,5,6},{7,8,9} };

	//for (int i = 0; i < vec.size(); i++)
	//{
	//	for (int j = 0; j < vec[i].size(); j++)
	//	{
	//		cout << vec[i][j] << " ";
	//	}
	//	cout << endl;
	//}

	/*cout << vec[1];*/

	//cout << vec.at(3);

//}

//int main()
//{
//
////�ǽ� 1. vector �����ϱ�
//	//1 .���� �����
//	vector<int> numbers;
//	//2. �Է� 5�� �޾Ƽ� ������ �߰�
//	cout << "������ �Է��ϼ��� :";
//	for (int i = 0; i < 5; i++)
//	{
//		int num;
//		cin >> num;
//		numbers.push_back(num);
//	}
//	// 3.ũ��
//	cout << "������ ũ�� : " << numbers.size() << endl;
//	// 4.��� ����
//	cout << "�Է��� ���� : ";
//	for (int val : numbers)
//	{
//		cout << val << " ";
//	}
//	cout << endl;
//	// 5.ū��
//	int max_value = numbers[0];
//	for (int num : numbers)
//	{
//		if (num > max_value) max_value = num;
//	}
//	cout << "���� ū�� : " << max_value << endl;
//
//	// 6.�ι� ��
//	for (int& num : numbers) num *= 2;
//	
//	// cout << numbers[0];
//
//	// 7. �ε����� �޾� �ش��ε��� ���� ����
//	int remove_index;
//	cout << "������ �ε����� �Է��ϼ��� : ";
//	cin >> remove_index;
//	numbers.erase(numbers.begin() + remove_index);
//
//	//8. �ε����� �Է¹޾� ���ο� ���� �߰�
//
//	int insertIdex, insertVal;
//	cout << "������ �ε����� ���� �Է��ϼ���";
//	cin >> insertIdex >> insertVal;
//	numbers.insert(numbers.begin() + insertIdex, insertVal);
//
//}

////�ǽ� 2. 2���� ��� �����
//int main()
//{
//	int rows, cols;
//	cout << "��� ���� ũ�⸦ �Է��ϼ��� :";
//	cin >> rows >> cols;
//
//	vector<vector<int>> matrix(rows,vector<int>(cols,0));
//	for (int i = 0; i < rows; i++)
//	{
//		for (int j = 0; j <cols; j++)
//		{
//			matrix[i][j] = (i + 1) * (j + 1);
//		}
//	}
//	for (int i = 0;i<rows;i++ ) 
//	{
//		for (int j=0; j<cols;j++) 
//		{
//			cout << matrix[i][j];
//		}
//		cout << endl;
//	}
//}

//�ǽ�3. 2���� ��� �����
//int main()
//{
//	int rows, cols;
//	cout << "��� ���� ũ�⸦ �Է��ϼ��� :";
//	cin >> rows >> cols;
//
//	vector<vector<int>> matrix(rows, vector<int>(cols));
//
//	cout << "����� ���Ҹ� �Է��ϼ���" << endl;
//	for (int i = 0; i < rows; i++)
//	{
//		for (int j = 0; j < cols; j++)
//		{
//			cin >> matrix[i][j];
//		}
//	}
//	cout << "�� ���� ��: " << endl;
//	for (int i=0; i < rows; i++)
//	{
//		int rowSum = 0;
//		for (int j=0; j < cols; j++)
//		{
//			rowSum += matrix[i][j];
//		}
//		cout << "�� " << i + 1 << ": " << rowSum << endl;
//	}
//	cout << "�� ���� ��: " << endl;
//	for (int i=0; i < cols; i++)
//	{
//		int colSum = 0;
//		for (int j=0; j < rows; j++)
//		{
//			colSum += matrix[j][i];
//		}
//		cout << "�� " << i + 1 << ": " << colSum << endl;
//	}
//}

// list ����
//int main()
//{
//	list<int> myList = { 1,2,3,4,5 };
//
//	////����Ʈ�� ���� �߰�/����
//	//myList.push_back(6);	//�ڿ� �߰�
//	//myList.push_front(0);	//�տ��� �߰�
//	//myList.pop_front();	// �տ��� ����
//	//myList.pop_back();	//�ڿ��� ����
//	//myList.erase(++myList.begin()); // �ι�° ��� ����
//	//myList.clear();	//��� ��� ����
//
//	//auto it = myList.begin();
//	//advance(it, 2);
//	//myList.insert(it, 10);
//	//myList.remove(5); // ���ϴ� �κ��� ����
//	//// ���Ǻ� remove
//	//myList.remove_if([](int n) {return n % 2 == 0; }); //Ȧ���� ����
//	///*advance(it, 1);
//	//myList.erase(it);*/
//
//	//����
//	list<int> list1 = { 1,2,3,2 };
//	list<int> list2 = { 4,5,6 };
//
//	//list1.unique(); //�ߺ� ����
//	//list1.splice(++list1.begin(), list2);	//list2�� ��� ��Ҹ� list1�� ���� �̵�
//	
////list ��ȸ
//	for (auto it = myList.begin(); it != myList.end(); it++)
//	{
//		cout << *it << endl;
//	}
//
//	cout << "���ŷ���";
//}

// list �ǽ�1. list ����غ���

int main()
{
// 1.����Ʈ �����
	list<int> myList = { 5,4,3,4,2,1,1 };
// 2. 4�� ����� ���
	//solutiton
	int count = 0;
	for (auto it = myList.begin(); myList.end(); it++) {
		if (*it == 4) count++;
	}

	//int cnt = count(myList.begin(), myList.end(), 4);
	//cout << "4�� ����: "<< cnt << endl;
// 3.����
	myList.sort();
	cout << "���ĵ� ����Ʈ"<< endl;
	for (int num : myList)
	{
		cout << num << " " ;
	}
	cout << endl;
// 4.���ӵ� �ߺ��� ����
	myList.unique();
	cout << "�ߺ� ���� ����Ʈ"<< endl;
	for (int num : myList)
	{
		cout << num << " ";
	}
	cout << endl;
//5.6,7�߰� push_back()�� �߰� ����
	list<int> addMy = { 6,7 };
	myList.merge(addMy);
	for (int num : myList)
	{
		cout << num << " ";
	}
	cout << endl;

//�տ� 0�߰�
	myList.push_front(0);
	for (int num : myList)
	{
		cout << num << " ";
	}
	cout << endl;

	
}