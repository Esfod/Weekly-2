#include <iostream>
class tasks
{
public:
	void task1a()
	{
		system("cls");
		int numb = 1;
		while (numb <= 100)
		{
			std::cout << numb << "\n";
			numb++;
		}
	}
	void task1b()
	{
		system("cls");
		for (int i = 1; i <= 100; i++)
		{
			std::cout << i << "\n";
		}
	}
	void task2()
	{
		system("cls");
		for (int i = 100; i > 0; i--)
		{
			std::cout << i << "\n";
		}
	}
	void task3()
	{
		system("cls");
		int numb = 5;
		while (numb <= 50)
		{
			std::cout << numb << "\n";
			numb += 5;
		}
	}
	void task4()
	{
		system("cls");
		for (int i = 5; i <= 50; i+=5)
		{
			std::cout << i << "\n";
		}
	}
	void task5()
	{
		system("cls");
		int numb = 5;
		do
		{
			std::cout << numb << "\n";
			numb += 5;
		} while (numb <=50);
	}
	void task6()
	{
		system("cls");
		char grade = ('a');
		std::cout << "What grade do u want in this chorse? (A-F)" << "\n";
		std::cin >> grade;
		grade = toupper(grade);
		system("cls");
		switch (grade)
		{
		case 'A':
			std::cout << "Outstanding" << "\n";
			break;
		case 'B':
			std::cout << "Very good" << "\n";
			break;
		case 'C':
			std::cout << "Good" << "\n";
			break;
		case 'D':
			std::cout << "Some flaws" << "\n";
			break;
		case 'E':
			std::cout << "Not very bad" << "\n";
			break;
		case 'F':
			std::cout << "Fail" << "\n";
			break;
		}
	}
	char convert(char s)
	{
		s = toupper(s);
		return s;
	}
};
int main()
{
	tasks counting;
	int number;
	std::cout << "Which task, numbers please 1-8.\n";
	std::cin >> number;
	switch (number)
	{
	case 1:
		counting.task1a();
		break;
	case 2:
		counting.task1b();
		break;
	case 3:
		counting.task2();
		break;
	case 4:
		counting.task3();
		break;
	case 5:
		counting.task4();
		break;	
	case 6:
		counting.task5();
		break;
	case 7:
		counting.task6();
		break;
	}
	return 0;
}