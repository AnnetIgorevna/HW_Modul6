#pragma once
#include <iostream>
#include "IAppliance.h"

class LargeAppliance : public IAppliance
{
public:
	LargeAppliance() = default;
	LargeAppliance(int warranty, std::string buildInAppl) :
		_warranty(warranty), _buildInAppl(buildInAppl) {}
	void showSpec() override {};
protected:
	int _warranty;
	std::string _buildInAppl;
};

class CookingPanel : virtual public LargeAppliance
{
public:
	CookingPanel(int warranty, std::string buildInAppl, std::string type, int numOfBurners) : LargeAppliance(warranty, buildInAppl),
		_type(type), _numOfBurners(numOfBurners) {}
	void showSpec() override;
protected:
	std::string _type;
	int _numOfBurners;
};

class Oven : virtual public LargeAppliance
{
public:
	Oven(int warranty, std::string buildInAppl, int ovenVolume) : LargeAppliance(warranty, buildInAppl),
		_ovenVolume(ovenVolume) {}
	void showSpec() override;
protected:
	int _ovenVolume;
};

class Stove final : public CookingPanel, Oven
{
public:
	Stove(int warranty, std::string buildInAppl, std::string type, int numOfBurners, int ovenVolume) :
		LargeAppliance(warranty, buildInAppl),
		CookingPanel(warranty, buildInAppl, type, numOfBurners),
		Oven(warranty, buildInAppl, ovenVolume) {}
	void showSpec() override;
private:
};

class WashingMachine final : public LargeAppliance
{
public:
	WashingMachine(int warranty, std::string buildInAppl, int numOfModes) : LargeAppliance(warranty, buildInAppl),
		_numOfModes(numOfModes) {}
	void showSpec() override;
private:
	int _numOfModes;
};

class Fridge final : public LargeAppliance
{
public:
	Fridge(int warranty, std::string buildInAppl, int numOfCameras) : LargeAppliance(warranty, buildInAppl),
		_numOfCameras(numOfCameras) {}
	void showSpec() override;
private:
	int _numOfCameras;
};