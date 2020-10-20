#include <iostream>
#include "catmanmundu.h"

int main()
{
	catmanmundu counting;
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