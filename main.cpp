#include <iostream>
#include <string.h>

#include "LargeAppliance.h"
#include "KitchenAppliances.h"

int main()
{
	setlocale(LC_ALL, "rus");

	IAppliance* product[10];

	product[0] = new CookingPanel(12, "Да", "Газовая", 4);
	product[1] = new Oven(12, "Да", 50);
	product[2] = new Stove(12, "Да", "Индукционная", 2, 40);
	product[3] = new WashingMachine(24, "Нет", 10);
	product[4] = new Fridge(24, "Да", 10);
	product[5] = new CoffeeMaker(24, 2);
	product[6] = new CoffeeGrinder(12, 200);
	product[7] = new CoffeeMachine(18, "Автоматическая", 2, 300);
	product[8] = new Teapot(12, 4);
	product[9] = new MicrowaveOven(24, 1200);

	bool open = true;
	while (open)
	{
		std::cout << "Выберите категорию товаров: 1 - крупная бытовая техника, 2 - техника для кухни, 0 - выход" << std::endl;
		int applianceChoice;
		std::cin >> applianceChoice;
		if (applianceChoice == 0)
		{
			open = false;
		}
		else if (applianceChoice == 1)
		{
			std::cout << "Выберите товар для просмотра характеристик: 1 - варочная панель, 2 - духовка, 3 - плита, 4 - стиральная машина, 5 - холодильник, 0 - выход" << std::endl;
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
				std::cout << "Неизвестная операция!" << std::endl;
				break;
			}
		}
		else if (applianceChoice == 2)
		{
			std::cout << "Выберите товар для просмотра характеристик: 1 - кофеварка, 2 - кофемолка, 3 - кофемашина, 4 - чайник, 5 - микроволновая печь, 0 - выход" << std::endl;
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
				std::cout << "Неизвестная операция!" << std::endl;
				break;
			}
		}
		else
		{
			std::cout << "Неизвестная операция!" << std::endl;
		}
	}
	for (int i = 0; i < 10; i++)
	{
		delete product[i];
	}

	return 0;
}