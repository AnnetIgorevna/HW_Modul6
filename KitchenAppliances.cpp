#include "KitchenAppliances.h"

void CoffeeMaker::showSpec()
{
	std::cout << "Кофеварка" << std::endl
		<< "Гарантия на товар: " << _warranty << " мес." << std::endl
		<< "Количество чашек: " << _numOfCups << std::endl;
}

void CoffeeGrinder::showSpec()
{
	std::cout << "Кофемолка" << std::endl
		<< "Гарантия на товар: " << _warranty << " мес." << std::endl
		<< "Емкость контейнера для кофе: " << _containerCapacity << " г" << std::endl;
}

void CoffeeMachine::showSpec()
{
	std::cout << "Кофемашина" << std::endl
		<< "Гарантия на товар: " << _warranty << " мес." << std::endl
		<< "Тип кофемашины: " << _type << std::endl
		<< "Количество чашек: " << _numOfCups << std::endl
		<< "Емкость контейнера для кофе: " << _containerCapacity << " г" << std::endl;
}

void Teapot::showSpec()
{
	std::cout << "Чайник" << std::endl
		<< "Гарантия на товар: " << _warranty << " мес." << std::endl
		<< "Объем чайника: " << _volumeOfTeapot << " л" << std::endl;
}

void MicrowaveOven::showSpec()
{
	std::cout << "Микроволновая печь" << std::endl
		<< "Гарантия на товар: " << _warranty << " мес." << std::endl
		<< "Максимальная мощность: " << _maxPower << " Вт" << std::endl;
}
