#include "LargeAppliance.h"

void CookingPanel::showSpec()
{
	std::cout << "�������� ������" << std::endl 
		<< "�������� �� �����: " << _warranty << " ���." << std::endl
		<< "������������ �������: " << _buildInAppl << std::endl 
		<< "���: " << _type << std::endl 
		<< "���������� ��������: " << _numOfBurners << std::endl;
}

void Oven::showSpec()
{
	std::cout << "������� ����" << std::endl
		<< "�������� �� �����: " << _warranty << " ���." << std::endl
		<< "������������ �������: " << _buildInAppl << std::endl
		<< "����� �������� �����: " << _ovenVolume << " �"<< std::endl;
}

void Stove::showSpec()
{
	std::cout << "�����" << std::endl
		<< "�������� �� �����: " << _warranty << " ���." << std::endl
		<< "������������ �������: " << _buildInAppl << std::endl
		<< "���: " << _type << std::endl
		<< "���������� ��������: " << _numOfBurners << std::endl
		<< "����� �������� �����: " << _ovenVolume << " �" << std::endl;
}

void WashingMachine::showSpec()
{
	std::cout << "���������� ������" << std::endl
		<< "�������� �� �����: " << _warranty << " ���." << std::endl
		<< "������������ �������: " << _buildInAppl << std::endl
		<< "���������� ������� ������: " << _numOfModes << std::endl;
}

void Fridge::showSpec()
{
	std::cout << "�����������" << std::endl
		<< "�������� �� �����: " << _warranty << " ���." << std::endl
		<< "������������ �������: " << _buildInAppl << std::endl
		<< "���������� ����� � ������������: " << _numOfCameras << std::endl;
}
