#pragma once

class IAppliance
{
public:
	virtual void showSpec() = 0;
	virtual ~IAppliance() = default;
};