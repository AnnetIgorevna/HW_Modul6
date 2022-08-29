#include <iostream>
#include <string.h>

#include "LargeAppliance.h"
#include "KitchenAppliances.h"

int main()
{
	setlocale(LC_ALL, "rus");

	IAppliance* product[10];

	product[0] = new CookingPanel(12, "��", "�������", 4);
	product[1] = new Oven(12, "��", 50);
	product[2] = new Stove(12, "��", "������������", 2, 40);
	product[3] = new WashingMachine(24, "���", 10);
	product[4] = new Fridge(24, "��", 10);
	product[5] = new CoffeeMaker(24, 2);
	product[6] = new CoffeeGrinder(12, 200);
	product[7] = new CoffeeMachine(18, "��������������", 2, 300);
	product[8] = new Teapot(12, 4);
	product[9] = new MicrowaveOven(24, 1200);

	bool open = true;
	while (open)
	{
		std::cout << "�������� ��������� �������: 1 - ������� ������� �������, 2 - ������� ��� �����, 0 - �����" << std::endl;
		int applianceChoice;
		std::cin >> applianceChoice;
		if (applianceChoice == 0)
		{
			open = false;
		}
		else if (applianceChoice == 1)
		{
			std::cout << "�������� ����� ��� ��������� �������������: 1 - �������� ������, 2 - �������, 3 - �����, 4 - ���������� ������, 5 - �����������, 0 - �����" << std::endl;
			int productLChoice;
			std::cin >> productLChoice;
			switch (productLChoice)
			{
			case 1:
				product[0]->showSpec();
				break;
			case 2:
				product[1]->showSpec();
				break;
			case 3:
				product[2]->showSpec();
				break;
			case 4:
				product[3]->showSpec();
				break;
			case 5:
				product[4]->showSpec();
				break;
			case 0:
				open = false;
				break;
			default:
				std::cout << "����������� ��������!" << std::endl;
				break;
			}
		}
		else if (applianceChoice == 2)
		{
			std::cout << "�������� ����� ��� ��������� �������������: 1 - ���������, 2 - ���������, 3 - ����������, 4 - ������, 5 - ������������� ����, 0 - �����" << std::endl;
			int productKChoice;
			std::cin >> productKChoice;
			switch (productKChoice)
			{
			case 1:
				product[5]->showSpec();
				break;
			case 2:
				product[6]->showSpec();
				break;
			case 3:
				product[7]->showSpec();
				break;
			case 4:
				product[8]->showSpec();
				break;
			case 5:
				product[9]->showSpec();
				break;
			case 0:
				open = false;
				break;
			default:
				std::cout << "����������� ��������!" << std::endl;
				break;
			}
		}
		else
		{
			std::cout << "����������� ��������!" << std::endl;
		}
	}
	for (int i = 0; i < 10; i++)
	{
		delete product[i];
	}

	return 0;
}