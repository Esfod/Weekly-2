#pragma once
#include <iostream>

class catmanmundu
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
		for (int i = 5; i <= 50; i += 5)
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
		} while (numb <= 50);
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

