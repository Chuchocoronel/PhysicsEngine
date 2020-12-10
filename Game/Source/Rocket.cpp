#include "Rocket.h"
#include "PhysicsEngine.h"


Rocket::Rocket(float _x, float _y, float _v, float _a, float _f, float _mass, int _health, float _fuel): Body(_x,_y,_v,_a,_f,_mass)
{
	health = _health;
	fuel = _fuel;
}

Rocket::~Rocket()
{
}

void Rocket::launchRocket()
{

}


void Rocket::refillFuel()
{

}