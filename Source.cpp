#include <iostream>
#include<cstdlib>
#include <ctime>


void arr_add(int*& arr, int length, int num){
	if (num <= 0)// Защита от лишних действий 
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
	// Динамические переменные
	/*// pointer это указатель
	int* pointer = new int; //Выделение динамической памяти в 4 байта так как указали в new  указали int
	*pointer = 7;// Запись значения в  выделенную область памяти
	std::cout << "*pointer = " << *pointer << std::endl;

	// Это освобождение памяти. delete Важно следить чтобы все указатели были почищены
	delete pointer;// Нам надо почистить предцдцщую память занятую цыфрой 7 и мы применяем оператор очистки памяти.

	//*pointer = 100;// В разименование указателя *pointer записываем значение ОШИБКА!!!


	// Тут мы перенаправляем наш участок памяти направляя указатель pointer на другую область мамяти pointer = new int;*pointer = 15;
	pointer = new int;
	*pointer = 15;
	std::cout << "*pointer = " << *pointer << std::endl;
	// Что поизошло: цыфра 7 зависла в памяти навсегда. Пока не почистит сама операционная система. Тоесь когда устройство будет полностью перезагружено.

	// Нам надо почистить предцдцщую память занятую цыфрой 7 и мы применяем оператор очистки памяти. delete

	delete pointer; // Очищаем в конце работы указателя динамическую память.
	*/

	// Динамические массивы
	/*int d_size;
	std::cout << "Введите длинну массива ->";
	std::cin >> d_size;

	int* d_arr = new int[d_size];

	
	std::cout << "Ввод данныых в массив : \n";
	for (int i = 0; i < d_size; i++) {
		std::cout << "*Введите  " << i + 1 << "-й элемент ";
		std::cin >> d_arr[i];
	}


	std::cout << "Получившийся массив \n[";
		for (int i = 0; i < d_size; i++)
			std::cout << d_arr[i] <<", ";
		std::cout << "\b\b]\n";


	//	delete d_arr; // Так мы очищае только первый элемент массива

		delete[] d_arr; // Так првильно.
		*/


	// Двумерные динамические массивы

/*	int rows; cols;
	std::cout << "Введите высоту массива -> ";
	std >> cin >> rows;
	std::cout << "Введите ширину массива -> ";
	std >> cin >> cols;

//	int* mx = new int[rows][cols];// ОШИБКА Данный синтаксис не подходит

	int** mx = new int* [rows]; // Выделяем память под массив указателей
	for (int i = 0; i < rows; i++)// Выделяем память под ячейки массива пробежав по циклу
		mx[i] = new int[cols]; // Выделяем память под ячейки массива

	mx[0][0] = 10;

	for(int i = 0; i < rows; i++)
	delete[] mx[i];// Очистили ряды массива 
	delete[] mx; //Очистили массив указателей
	*/


	//Задача 1 Увеличение размеров массива
	//Создайте функцию которая принимает Динам масс Его длинну + количество элем которые добавятся с права

	std::cout << "Введите размер массива ->";
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

	std::cout << " Введите доп количество элементов -> ";
	std::cin>>n;
	arr_add(arr1, size1, n);
	size1 += n;

	std::cout << " Итоговый массив \n ";
	for (int i = 0; i < size1; i++)
		std::cout << arr1[i] << ' ';
	std::cout << "\b\b.\n";


	return 0;
}