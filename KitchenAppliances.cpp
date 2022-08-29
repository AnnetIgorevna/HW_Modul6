#include "KitchenAppliances.h"

void CoffeeMaker::showSpec()
{
	std::cout << "���������" << std::endl
		<< "�������� �� �����: " << _warranty << " ���." << std::endl
		<< "���������� �����: " << _numOfCups << std::endl;
}

void CoffeeGrinder::showSpec()
{
	std::cout << "���������" << std::endl
		<< "�������� �� �����: " << _warranty << " ���." << std::endl
		<< "������� ���������� ��� ����: " << _containerCapacity << " �" << std::endl;
}

void CoffeeMachine::showSpec()
{
	std::cout << "����������" << std::endl
		<< "�������� �� �����: " << _warranty << " ���." << std::endl
		<< "��� ����������: " << _type << std::endl
		<< "���������� �����: " << _numOfCups << std::endl
		<< "������� ���������� ��� ����: " << _containerCapacity << " �" << std::endl;
}

void Teapot::showSpec()
{
	std::cout << "������" << std::endl
		<< "�������� �� �����: " << _warranty << " ���." << std::endl
		<< "����� �������: " << _volumeOfTeapot << " �" << std::endl;
}

void MicrowaveOven::showSpec()
{
	std::cout << "������������� ����" << std::endl
		<< "�������� �� �����: " << _warranty << " ���." << std::endl
		<< "������������ ��������: " << _maxPower << " ��" << std::endl;
}
