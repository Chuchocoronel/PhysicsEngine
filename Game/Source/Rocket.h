#pragma once

#include "Body.h"


class Rocket : public Body
{
public:
	int health;
	float fuel;

public:

	void launchRocket();
	void refillFuel();

};