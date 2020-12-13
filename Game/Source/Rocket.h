#pragma once

#include "Body.h"
#include "Vectors.h"


class Rocket : public Body
{
public:

	Rocket(){}
	Rocket(float _x, float _y, Vec2 _v, float _a, float _f, float _mass, int _health, float _fuel);


	~Rocket();

public:
	int health;
	float fuel;
	Vec2 velocity;
	Vec2 acceleration;
	float f;

public:

	void launchRocket();
	void refillFuel();
	void AddMomentum(float xV, float yV);
	void OnCollision();

};