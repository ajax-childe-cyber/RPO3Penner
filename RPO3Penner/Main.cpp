#include <iostream>
#include <Windows.h>

/*

тип_возврата Имя_Функции(аргументы_функции, ...)
{

	тело_функции

}

*/


/*void PrintHello()
{
	std::cout << "Hello\n";
	int a = 10;
	std::cout << a;
}

void PrintNum(int a, double c)
{
	a += c;
	std::cout << a + c << "\n";
}

int Sum(int a, int b)
{
	PrintNum(4, 5);
	return a + b;
}

double Clojenie(double a, double b)
{
	return a + b;
}
double Vichitanie(double a, double b)
{
	return a - b;
}
double Umnojenie(double a, double b)
{
	return a * b;
}
double Delenie(double a, double b)
{
	return a / b;
}
void PrintArr(int name[], int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << name[i];
	}
}
void SetArr(int name[], int size)
{
	for (int i = 0; i < size; i++)
	{
	 name[i] = rand() % 6;
	}
}*/
/*double Clojenie(double a, double b);
int Clojenie(int a, int b)
{
	return a + b;
}


void FillArray(int arr[], int size)
{
	
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 10 + 1;
		std::cout << arr[i] << " ";
	}
	std::cout << "\n";
}
void FillArray(double arr[], int size)
{

	for (int i = 0; i < size; i++)
	{
		arr[i] = (double)(rand() % 100 + 1);
		arr[i] = arr[i] / 10;
		std::cout << arr[i] << " ";
	}
	std::cout << "\n";
}
void FillArray(char arr[], int size)
{
	
	for (int i = 0; i < size; i++)
	{
		arr[i] = (char)(rand() % 26 + 97);
		std::cout << arr[i] << " ";
	}
	std::cout << "\n";
}*/
/*template <class T1, class T2>
T1 Substruck(T1 one, T2 two)
{
	typeid;
	T1 asd;
	return one - two;
}*/
/*int Fack(int num)
{
	if (num < 0)
	{
		return 0;
	}
	if (num == 0)
	{
		return 1;
	}
	return num * Fack(num - 1);
}

int Umn(int num1, int num2)
{
	
	if (num2 == 0)
	{
		return 0;
	}
	return num1 + Umn(num1, num2 - 1);
}*/

bool visokosny(int year)
{
	if (year % 400 == 0)
		return true;

	if (year % 100 == 0)
		return false;

	if (year % 4 == 0)
		return true;

	return false;
}

int daysInMonth(int month, int year)
{
	if (month == 2)
	{
		if (visokosny(year))
			return 29;
		else
			return 28;
	}

	if (month == 4 || month == 6 || month == 9 || month == 11)
		return 30;

	return 31;
}

bool correctDate(int day, int month, int year)
{
	if (month < 1 || month > 12)
		return false;

	if (day < 1 || day > daysInMonth(month, year))
		return false;

	if (year < 1)
		return false;

	return true;
}

int daysStart(int day, int month, int year)
{
	int days = 0;

	for (int i = 1; i < year; i++)
	{
		if (visokosny(i))
			days += 366;
		else
			days += 365;
	}

	for (int i = 1; i < month; i++)
	{
		days += daysInMonth(i, year);
	}

	days += day;

	return days;
}

int difference(int day1, int month1, int year1,
	int day2, int month2, int year2)
{
	int date1 = daysStart(day1, month1, year1);
	int date2 = daysStart(day2, month2, year2);

	int result = date1 - date2;

	if (result < 0)
		result = -result;

	return result;
}
double average(int arr[], int size)
{
	int sum = 0;

	for (int i = 0; i < size; i++)
	{
		sum += arr[i];
	}

	return (double)sum / size;
}

void countElements(int arr[], int size,
	int& positive,
	int& negative,
	int& zero)
{
	positive = 0;
	negative = 0;
	zero = 0;

	for (int i = 0; i < size; i++)
	{
		if (arr[i] > 0)
			positive++;
		else if (arr[i] < 0)
			negative++;
		else
			zero++;
	}
}

double fuelConsumption[2][3] = { {1, 4, 7}, {2, 4, 6} };


int maxWeight[2][3] = { {750, 1500, 2000}, {1000, 2000, 3000} };


int tankCapacity[2] = { 300, 1000 };


double getConsumption(int plane, int cargoWeight)
{
	for (int i = 0; i < 3; i++)
	{
		if (cargoWeight <= maxWeight[plane][i])
		{
			return fuelConsumption[plane][i];
		}
	}

	return -1; 
}



int main()
{
	
	//Substruck(10, 3);
	

	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	srand(time(NULL));
	/*
	//std::cout << "\tHello world" << " Data" << 10 + 100 << std::endl;
	//std::cout << "info\n" << 10;
	std::cout << "Меня зовут Даша\n"
		<< "\tМне " << 17 << " лет\n"
		<< "Профессия разработчик\n"
		<< "\t\tПельмени дорогие потому что говядина в пельменях дорогая\n"
		<< "Пачка пельменей стоит " << 300 << " рублей\n"
		<< "\tПотому что он вкусный и бодрит\n";

	*/  //тип_данных имя_переменной
	/*int one = 1;
	int two = 0;

	if (one + 10 > 0)
	{
		std::cout << "Hello\n\n";
	}
	else if (one != 0)
	{
		std::cout << 132;
	}
	else
	{

		std::cout << "Not hello>:(\n\n";


	}




	std::cout << " :";
	std::cin >> one;
	std::cout << " :" << one << " " << two + one;*/
	/*double one = 0;
	double two = 0;
	char znak = ' ';

	std::cout << "Введите первое число:  ";
	std::cin >> one;
	std::cout << "Введите второе число:  ";
	std::cin >> two;
	std::cout << "Введите математический знак(+,-,*,/):  ";
	std::cin >> znak;
	if (znak == '+')
	{
		std::cout << one + two;
	}
	else if (znak == '-')
	{
		std::cout << one - two;
	}
	else if (znak == '*')
	{
		std::cout << one * two;
	}
	else if (znak == '/' && two != 0)
	{
		std::cout << one / two;
	}
	else if (znak == '/' && two == 0)
	{
		std::cout << "На ноль делить нельзя";
	}
	else
	{
		std::cout << "неправильно введен знак";
	}*/
	/*double a = 0, b = 0, c = 0, d = 0, x1 = 0, x2 = 0;

	std::cout << "Решение полного квадратного уравнения\n\n";
	std::cout << "ax^2 + bx + c = 0\n\n";
	std::cout << "Введите А: ";
	std::cin >> a;
	std::cout << "Введите В: ";
	std::cin >> b;
	std::cout << "Введите С: ";
	std::cin >> c;

	std::cout << a << "x^2 + " << b << "x + " << c << " = 0 \n\n";

	d = std::pow(b, 2) - 4 * a * c;
	std::cout << "Дискрименант раавен: " << d << "\n\n";

	if (d > 0)
	{
		x1 = ( - b + std::sqrt(d))/ (2 * a);
		x2 = ( - b - std::sqrt(d)) / (2 * a);
		std::cout << "Первый корень " << x1 << "\nвторой корень " << x2 << "\n";
	}
	else if (d == 0)
	{
		x1 = -b / (2 * a);
		std::cout << "Один корень: " << x1 << "\n";
	}
	else
	{
		std::cout << "Корней нет!";
	}*/
	/*int a = 0;
	
	
	while (a < 5)
	{

		std::cout << "Hello ";
		a = a + 1;
		if (a == 3)
		{
			//break;
			continue;
		}

	}

	while (a == 5)
	{
		std::cout << "Hell ";
		break;

	} 

	double sym = 0, num = 1;

	while (num != 0)
	{
		std::cout << "Введите число: ";
		std::cin >> num;
		sym = sym + num;
	}
	std::cout << "Сумма всех чисел равна " << sym - 1;*/
	/*int num = 0;
	do
	{
		std::cout << "Выберете число\n 1 - Ларионов\n 2 - Александр\n 3 - Дмитриевич\n";
		std::cin >> num;
		
		

	} while (num != 1 && num != 2 && num != 3);
	if (num == 1)
	{
		std::cout << "Ларионов\n\n";
	}
	else if (num == 2)
	{
		std::cout << "Александр\n\n";
	}
	else if (num == 3)
	{
		std::cout << "Дмитриевич\n\n";
	}*/
	/*int switch_on = 3;
switch (switch_on)
{
	case 1:
		break;
	case 2:
		
	case 3:
		break;
	default:

		break;
}


for (int i = 0; i < 5; i++)
{
	std::cout << "Hello ";
}*/
	/*int choose = 0, number = 0, hp = 0, randomNumber = 0;
	int maxHp = 25, maxHpHard = 25, chance = 33;

	//choose = rand() % 10 + 1;
	//std::cout << choose << "\n\n";
	//system("pause");*/
	/*while (true)
	{
		system("cls");
		std::cout << "\n\n\n\t\tИгра \"Угадай число\"\n\n\n";
		std::cout << "1 - Начать игру\n";
		std::cout << "2 - Настройки\n";
		std::cout << "0 - Выход\n\n";
		std::cout << "Ввод: ";

		std::cin >> choose;

		if (choose == 1)
		{
			while (true)
			{
				system("cls");
				std::cout << "\n\n\n\t\tВыберете уровень сложности\n\n\n";
				std::cout << "1 - Легкий (1 - 500)\n";
				std::cout << "2 - Сложный (1 - 5000)\n";
				std::cout << "0 - Выход в главное меню\n\n";
				std::cout << "Ввод: ";

				std::cin >> choose;

				if (choose == 1)
				{
					randomNumber = rand() % 500 + 1;
					hp = maxHp;

					while (true)
					{
						system("cls");
						std::cout << "Количество жизней: " << hp << "\n";
						std::cout << "Введите число от 1 до 500: ";
						std::cin >> number;
						if (number == randomNumber)
						{
							std::cout << "\n\n\n\t\tВы угадали! Ееее!\n\n\n";
							system("pause");
							break;
						}
					
						else if (number < 1 || number > 500)
						{
							std::cout << "Вы вышли из диапозона\n";
							Sleep(1000);
						}
						else
						{
							hp--;
							if (hp <= 0)
							{
								std::cout << "Вы проиграли";
								std::cout << "Числом было: " << randomNumber << "\n";
								system("pause");
								break;
							}
							std::cout << "Вы не угадали\n";
							std::cout << "Взять подсказку за жизнь?\n";
							std::cout << "Количество жизней: " << hp << "\n";
							std::cout << "1 - Да\nЛюбое число - Нет\nВвод: ";
							std::cin >> choose;
							if (choose == 1)
							{
								hp--;
								if (hp <= 0)
								{
									std::cout << "Вы проиграли";
									std::cout << "Числом было: " << randomNumber << "\n";
									system("pause");
									break;
								}
								if (number < randomNumber)
								{
									std::cout << "Ваше число меньше числа компьютера\n";
								}
								else
								{
									std::cout << "Ваше число больше числа компьютера\n";
								}
								Sleep(1500);
							}
							else
							{
								std::cout << "Отказ от подсказки\n";
								Sleep(1000);
							}
						}
					}
				}
				else if (choose == 2)
				{
					randomNumber = rand() % 5000 + 1;
					hp = maxHpHard;

					while (true)
					{
						system("cls");
						std::cout << "Количество жизней: " << hp << "\n";
						std::cout << "Введите число от 1 до 5000: ";
						std::cin >> number;
						if (number == randomNumber)
						{
							std::cout << "\n\n\n\t\tВы угадали! Ееее!\n\n\n";
							system("pause");
							break;
						}

						else if (number < 1 || number > 5000)
						{
							std::cout << "Вы вышли из диапозона\n";
							Sleep(1000);
						}
						else
						{
							hp--;
							if (hp <= 0)
							{
								std::cout << "Вы проиграли";
								std::cout << "Числом было: " << randomNumber << "\n";
								system("pause");
								break;
							}
							std::cout << "Вы не угадали\n";
							std::cout << "Взять подсказку за жизнь?\n";
							std::cout << "Количество жизней: " << hp << "\n";
							std::cout << "1 - Да\nЛюбое число - Нет\nВвод: ";
							std::cin >> choose;
							if (choose == 1)
							{
								if (rand() % 101 <= chance)
								{
									std::cout << "Бесплатная подсказка\n";
									Sleep(1500);
								}
								else
								{
									hp--;
									if (hp <= 0)
									{
										std::cout << "Вы проиграли";
										std::cout << "Числом было: " << randomNumber << "\n";
										system("pause");
										break;
									}
								}


								
								if (number < randomNumber)
								{
									std::cout << "Ваше число меньше числа компьютера\n";
								}
								else
								{
									std::cout << "Ваше число больше числа компьютера\n";
								}
								Sleep(rand() % 1500 + 500);
							}
							else
							{
								std::cout << "Отказ от подсказки\n";
								Sleep(1000);
							}
						}
					}
				}
				else if (choose == 0)
				{
					break;
				}
				else
				{
					std::cout << "Некорректный ввод\n\n";
					Sleep(1000);
				}
			}
		}
		else if (choose == 2)
		{
			while (true)
			{
				system("cls");
				std::cout << "\n\n\n\t\tНастройки игры\n\n\n";
				std::cout << "1 - Изменить кол-во жизней для легкой игры\n";
				std::cout << "2 - Изменить кол-во жизней для легкой игры\n";
				std::cout << "3 - Изменить шанс бесплатной подсказки для сложной игры\n";
				std::cout << "0 - Выход в главное меню\n\n";
				std::cout << "Ввод: ";

				std::cin >> choose;

				if (choose == 1)
				{
					std::cout << "Введите кол-во жизней для легкой игры: \n\n";
					std::cin >> choose;
					if (choose < 1 || choose > 100)
					{
						std::cout << "Допустимые лимиты от 1 до 100\n\n";
						Sleep(1000);
					}
					else
					{
						std::cout << "Успешно\n";
						Sleep(1000);
						maxHp = choose;
						break;
					}
				}
				else if (choose == 2)
				{
					std::cout << "Введите кол-во жизней для сложной игры: \n\n";
					std::cin >> choose;
					if (choose < 1 || choose > 50)
					{
						std::cout << "Допустимые лимиты от 1 до 50\n\n";
						Sleep(1000);
					}
					else
					{
						std::cout << "Успешно\n";
						Sleep(1000);
						maxHpHard = choose;
						break;
					}
				}
				else if (choose == 3)
				{
					std::cout << "Введите шанс бесплатной подсказки для сложной игры: \n\n";
					std::cin >> choose;
					if (choose < 0 || choose > 100)
					{
						std::cout << "Допустимые лимиты от 0 до 100\n\n";
						Sleep(1000);
					}
					else
					{
						std::cout << "Успешно\n";
						Sleep(1000);
						chance = choose;
						break;
					}
				}
				else if (choose == 0)
				{
					break;
				}
				else
				{
					std::cout << "Некорректный ввод\n\n";
					Sleep(1000);
				}
			}
		}
		else if (choose == 0)
		{
			system("cls");
			std::cout << "\n\n\n\t\t Спасибо за игру\n\n\n";
			break;
		}
		else
		{
			std::cout << "Некорректный ввод\n\n";
			Sleep(1000);
		}


	} */
	/*// тип_данных имя_массива[количество_ячеек]
	const int size = 10;
	double sum = 0, summ = 0, crar = 0;
	int arr[size]{};
	//arr[0] = 10;
	//arr[1] = 30;
	//arr[2] = 40;

	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 21 - 10;
	}
	std::cout << "Содержание массива:  ";
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << " " ;
	}
	std::cout << "\n\nСумма всех положительных чисел:  ";
	for (int i = 0; i < size; i++)
	{
		if (arr[i] >= 0)
		{
			sum = sum + arr[i];
		}
		else
		{

		}
	}
	std::cout << sum;
	std::cout << "\n\nСумма всех отрицательных чисел:  ";
	for (int i = 0; i < size; i++)
	{
		if (arr[i] <= 0)
		{
			summ = summ + arr[i];
		}
		else
		{

		}
	}
	std::cout << summ;

	for (int i = 0; i < size; i++)
	{
		crar = crar + arr[i];
	}
	std::cout << "\n\nСреднее арифмитическое массива:  " << crar/ size << "\n"; */
	/*const int row = 3, col = 4;
	int arr[row][col];

	
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			arr[i][j] = rand() % 10 + 1;
			std::cout << arr[i][j] << " ";
		}
		std::cout << "\n";

	}*/
    /*
	//int b = 1;

	//PrintNum(b, 100);
	//std::cout << b << "\n";

	//std::cout << Sum(1, 2);*/
	/*char znak = ' ';
	double a = 0, b = 0;
	std::cout << "Введите оператор: ";
	std::cin >> znak;
	std::cout << "Введите первое число: ";
	std::cin >> a;
	std::cout << "Введите второе число: ";
	std::cin >> b;

	std::cout << "Ответ: ";
	if (znak == '+' )
	{
		std::cout << Clojenie(a, b) << "\n";
	}
	else if (znak == '-')
	{
		std::cout << Vichitanie(a, b) << "\n";
	}
	else if (znak == '*')
	{
		std::cout << Umnojenie(a, b) << "\n";
	}
	else if (znak == '/')
	{
		if (b == 0)
		{
			std::cout << "На ноль делить незя";
		}
		else
		{
			std::cout << Delenie(a, b) << "\n";
		}
	}
	else
	{
		std::cout << "Неверный знак";
	}
	const int size = 5;
	int arr[size];*/
	/*int num1 = 0, num2 = 0;
	std::cin >> num1;
	std::cout << "\n";
	std::cin >> num2;
	std::cout << "\n";*/
	/*	std::cout << Umn(3,4) << "\n";
	std::cout << Fack(5) << "\n";

	//Clojenie(3 , 6);

	const int size = 4;

	int arr1[size]{};
	double arr2[size]{};
	char arr3[size]{};
	
	FillArray(arr1, size);
	FillArray(arr2, size);
	FillArray(arr3, size);*/
	
int znak = 0;
std::cout << "Выберете домашку, 1 - функции 1, другое - Хорошая практика программирования и массивов\n\n";
std::cin >> znak;
if (znak == 1)
{
	int day1 = 0, month1 = 0, year1 = 0;
	int day2 = 0, month2 = 0, year2 = 0;

	std::cout << "Введите первую дату: \nДень: ";
	std::cin >> day1;
	std::cout << "\nМесяц: ";
	std::cin >> month1;
	std::cout << "\nГод: ";
	std::cin >> year1;

	if (!correctDate(day1, month1, year1))
	{
		std::cout << "Ошибка: первая дата некорректна!" << "\n\n";
		return 0;
	}

	std::cout << "Введите вторую дату: \nДень: ";
	std::cin >> day2;
	std::cout << "\nМесяц: ";
	std::cin >> month2;
	std::cout << "\nГод: ";
	std::cin >> year2;

	if (!correctDate(day2, month2, year2))
	{
		std::cout << "Ошибка: вторая дата некорректна!" << "\n\n";
		return 0;
	}

	std::cout << "Разница: "
		<< difference(day1, month1, year1,
			day2, month2, year2)
		<< " дней" << "\n\n";



	int size = 0;

	std::cout << "Введите количество элементов массива: ";
	std::cin >> size;

	if (size <= 0)
	{
		std::cout << "Ошибка: размер массива должен быть больше 0!" << "\n\n";
		return 0;
	}

	int* arr = new int[size];

	std::cout << "Введите элементы массива:" << "\n\n";

	for (int i = 0; i < size; i++)
	{
		std::cin >> arr[i];
	}

	std::cout << "Среднее арифметическое: "
		<< average(arr, size) << "\n\n";

	int positive;
	int negative;
	int zero;

	countElements(arr, size, positive, negative, zero);

	std::cout << "Положительных элементов: "
		<< positive << "\n";

	std::cout << "Отрицательных элементов: "
		<< negative << "\n";

	std::cout << "Нулевых элементов: "
		<< zero << "\n\n";
}
else
{
	int plane = 0;
	double distanceAB = 0;
	double distanceBC = 0;
	int cargoWeight = 0;

	std::cout << "Выберите самолёт 1 или 2: ";
	std::cin >> plane;

	if (plane < 1 || plane > 2)
	{
		std::cout << "Ошибка: такого самолёта нет!\n";
		return 0;
	}

	std::cout << "Введите расстояние от А до В: ";
	std::cin >> distanceAB;

	std::cout << "Введите расстояние от В до С: ";
	std::cin >> distanceBC;

	std::cout << "Введите вес груза: ";
	std::cin >> cargoWeight;

	if (distanceAB < 0 || distanceBC < 0 || cargoWeight < 0)
	{
		std::cout << "Ошибка: введены отрицательные значения!\n";
		return 0;
	}

	int index = plane - 1;

	double consumption = getConsumption(index, cargoWeight);

	if (consumption == -1)
	{
		std::cout << "Самолёт не может поднять такой груз!\n";
		return 0;
	}

	double fuelAB = distanceAB * consumption;
	double fuelBC = distanceBC * consumption;

	double temporaryTank = 100;
	double mainTank = tankCapacity[index];

	double totalFuelAtA = temporaryTank + mainTank;

	if (fuelAB > totalFuelAtA)
	{
		std::cout << "Невозможно долететь из А в В!\n";
		return 0;
	}

	double fuelFromTemporary = temporaryTank;

	if (fuelAB <= fuelFromTemporary)
	{
		fuelFromTemporary = fuelAB;
		fuelAB = 0;
	}
	else
	{
		fuelAB -= fuelFromTemporary;
		fuelFromTemporary = 0;
	}

	double remainingMainTank = mainTank - fuelAB;

	if (fuelBC > tankCapacity[index])
	{
		std::cout << "Невозможно долететь из В в С даже с полным основным баком!\n";
		return 0;
	}

	double refuel = fuelBC - remainingMainTank;

	if (refuel < 0)
	{
		refuel = 0;
	}

	if (remainingMainTank + refuel > tankCapacity[index])
	{
		std::cout << "Невозможно выполнить маршрут!\n";
		return 0;
	}

	std::cout << "\n--- Результат ---\n" << "Расход топлива: " << consumption << " л/км\n" << "Топливо на А -> В: " 
	<< fuelAB + (temporaryTank - fuelFromTemporary) << " л\n" << "Топливо в основном баке в точке В: " << remainingMainTank << " л\n"
	<< "Топливо на В -> С: " << fuelBC << " л\n" << "Минимально нужно заправить в В: " << refuel << " л\n";    
}



	return 0;
}

/* 
типы данных: 
bool			 true/false 0 - false, остальное true
char			 '' один символ, \т - один символ, числа ascii
unsigned char	 0 - 255	

short               123					-32768 —– 32767
unsigned short		123					0 -- 65535

int					123456				-2147483648 -- 2147483647
unsigned int		123456				0 - 4294967295
long long int

float				123.456				+- 3.4e-38...3.e+38

double				123123.123123		+- 1.7e-308..1.7e-308
long double			123123.123123		3.4-4932

auto				???



Операторы: 

математические: + - / * % () ++ -- += -= *= /= = 
сравнительный: > < == >= <= !=    <=>
логические: && (и)   || (или)  !(не)

ТАБУ: goto,		and or not,		int номерОдин;


*/
// ggbswgttgsehрм