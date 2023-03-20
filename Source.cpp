#include <iostream>
#include<cstdlib>
#include <ctime>


void arr_add(int*& arr, int length, int num){
	if (num <= 0)// ������ �� ������ �������� 
		return;//
	int* tmp = new int[length + num]{};
	for (int i = 0; i < length; i++)
		tmp[i] = arr[i];
	delete[] arr;
	arr = tmp;
}


int main() {
	setlocale(LC_ALL, "Rus");

	int n;
	// ������������ ����������
	/*// pointer ��� ���������
	int* pointer = new int; //��������� ������������ ������ � 4 ����� ��� ��� ������� � new  ������� int
	*pointer = 7;// ������ �������� �  ���������� ������� ������
	std::cout << "*pointer = " << *pointer << std::endl;

	// ��� ������������ ������. delete ����� ������� ����� ��� ��������� ���� ��������
	delete pointer;// ��� ���� ��������� ���������� ������ ������� ������ 7 � �� ��������� �������� ������� ������.

	//*pointer = 100;// � ������������� ��������� *pointer ���������� �������� ������!!!


	// ��� �� �������������� ��� ������� ������ ��������� ��������� pointer �� ������ ������� ������ pointer = new int;*pointer = 15;
	pointer = new int;
	*pointer = 15;
	std::cout << "*pointer = " << *pointer << std::endl;
	// ��� ��������: ����� 7 ������� � ������ ��������. ���� �� �������� ���� ������������ �������. ����� ����� ���������� ����� ��������� �������������.

	// ��� ���� ��������� ���������� ������ ������� ������ 7 � �� ��������� �������� ������� ������. delete

	delete pointer; // ������� � ����� ������ ��������� ������������ ������.
	*/

	// ������������ �������
	/*int d_size;
	std::cout << "������� ������ ������� ->";
	std::cin >> d_size;

	int* d_arr = new int[d_size];

	
	std::cout << "���� ������� � ������ : \n";
	for (int i = 0; i < d_size; i++) {
		std::cout << "*�������  " << i + 1 << "-� ������� ";
		std::cin >> d_arr[i];
	}


	std::cout << "������������ ������ \n[";
		for (int i = 0; i < d_size; i++)
			std::cout << d_arr[i] <<", ";
		std::cout << "\b\b]\n";


	//	delete d_arr; // ��� �� ������ ������ ������ ������� �������

		delete[] d_arr; // ��� ��������.
		*/


	// ��������� ������������ �������

/*	int rows; cols;
	std::cout << "������� ������ ������� -> ";
	std >> cin >> rows;
	std::cout << "������� ������ ������� -> ";
	std >> cin >> cols;

//	int* mx = new int[rows][cols];// ������ ������ ��������� �� ��������

	int** mx = new int* [rows]; // �������� ������ ��� ������ ����������
	for (int i = 0; i < rows; i++)// �������� ������ ��� ������ ������� �������� �� �����
		mx[i] = new int[cols]; // �������� ������ ��� ������ �������

	mx[0][0] = 10;

	for(int i = 0; i < rows; i++)
	delete[] mx[i];// �������� ���� ������� 
	delete[] mx; //�������� ������ ����������
	*/


	//������ 1 ���������� �������� �������
	//�������� ������� ������� ��������� ����� ���� ��� ������ + ���������� ���� ������� ��������� � �����

	std::cout << "������� ������ ������� ->";
	int size1;
	std::cin >> size1;
	int* arr1 = new int[size1];

	srand(time(NULL));
	std::cout << "   : \n";
	for (int i = 0; i < size1; i++) {
		arr1[i] = rand() % 10 + 1;// [1...10]
		std::cout << arr1[i] << ' ';
	}

	std::cout << std::endl;

	std::cout << " ������� ��� ���������� ��������� -> ";
	std::cin>>n;
	arr_add(arr1, size1, n);
	size1 += n;

	std::cout << " �������� ������ \n ";
	for (int i = 0; i < size1; i++)
		std::cout << arr1[i] << ' ';
	std::cout << "\b\b.\n";


	return 0;
}