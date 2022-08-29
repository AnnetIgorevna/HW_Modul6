#pragma once
#include <iostream>
#include "IAppliance.h"

class KitchenAppliances : public IAppliance
{
public:
	KitchenAppliances() = default;
	KitchenAppliances(int warranty) : _warranty(warranty) {}
	void showSpec() override {};
protected:
	int _warranty;
};

class CoffeeMaker : virtual public KitchenAppliances
{
public:
	CoffeeMaker(int warranty, int numOfCups) : KitchenAppliances(warranty),
		_numOfCups(numOfCups) {}
	void showSpec() override;
protected:
	int _numOfCups;
};

class CoffeeGrinder : virtual public KitchenAppliances
{
public:
	CoffeeGrinder(int warranty, int containerCapacity) : KitchenAppliances(warranty),
		_containerCapacity(containerCapacity) {}
	void showSpec() override;
protected:
	int _containerCapacity;
};

class CoffeeMachine final : public CoffeeMaker, CoffeeGrinder
{
public:
	CoffeeMachine(int warranty, std::string type, int numOfCups, int containerCapacity) :
		KitchenAppliances(warranty),
		CoffeeMaker(warranty, numOfCups),
		CoffeeGrinder(warranty, containerCapacity),
		_type(type) {}
	void showSpec() override;
private:
	std::string _type;
};

class Teapot final : public KitchenAppliances
{
public:
	Teapot(int warranty, int volumeOfTeapot) : KitchenAppliances(warranty),
		_volumeOfTeapot(volumeOfTeapot) {}
	void showSpec() override;
private:
	int _volumeOfTeapot;
};

class MicrowaveOven final : public KitchenAppliances
{
public:
	MicrowaveOven(int warranty, int maxPower) : KitchenAppliances(warranty),
		_maxPower(maxPower) {}
	void showSpec() override;
private:
	int _maxPower;
};