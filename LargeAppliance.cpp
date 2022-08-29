#include "LargeAppliance.h"

void CookingPanel::showSpec()
{
	std::cout << "Варочная панель" << std::endl 
		<< "Гарантия на товар: " << _warranty << " мес." << std::endl
		<< "Встраиваемая техника: " << _buildInAppl << std::endl 
		<< "Тип: " << _type << std::endl 
		<< "Количество конфорок: " << _numOfBurners << std::endl;
}

void Oven::showSpec()
{
	std::cout << "Духовой шкаф" << std::endl
		<< "Гарантия на товар: " << _warranty << " мес." << std::endl
		<< "Встраиваемая техника: " << _buildInAppl << std::endl
		<< "Объем духового шкафа: " << _ovenVolume << " л"<< std::endl;
}

void Stove::showSpec()
{
	std::cout << "Плита" << std::endl
		<< "Гарантия на товар: " << _warranty << " мес." << std::endl
		<< "Встраиваемая техника: " << _buildInAppl << std::endl
		<< "Тип: " << _type << std::endl
		<< "Количество конфорок: " << _numOfBurners << std::endl
		<< "Объем духового шкафа: " << _ovenVolume << " л" << std::endl;
}

void WashingMachine::showSpec()
{
	std::cout << "Стиральная машина" << std::endl
		<< "Гарантия на товар: " << _warranty << " мес." << std::endl
		<< "Встраиваемая техника: " << _buildInAppl << std::endl
		<< "Количество режимов стирки: " << _numOfModes << std::endl;
}

void Fridge::showSpec()
{
	std::cout << "Холодильник" << std::endl
		<< "Гарантия на товар: " << _warranty << " мес." << std::endl
		<< "Встраиваемая техника: " << _buildInAppl << std::endl
		<< "Количество камер в холодильнике: " << _numOfCameras << std::endl;
}
