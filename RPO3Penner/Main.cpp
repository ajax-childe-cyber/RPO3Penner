#include <iostream>
#include <Windows.h>

/*

тип_возврата Имя_Функции(аргументы_функции, ...)
{

	тело_функции

}

*/


void PrintHello()
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
}



int main()
{
	
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

	//int b = 1;

	//PrintNum(b, 100);
	//std::cout << b << "\n";

	//std::cout << Sum(1, 2);
	char znak = ' ';
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
	int arr[size];


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
// ggbswgttgseh