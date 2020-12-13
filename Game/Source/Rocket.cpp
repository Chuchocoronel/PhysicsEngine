#include "Rocket.h"
#include "PhysicsEngine.h"



Rocket::~Rocket()
{
}

void Rocket::launchRocket()
{

}


void Rocket::refillFuel()
{

}

void Rocket::AddMomentum(float xV, float yV)
{
	float velocityX = xV / mass;
	float velocityY = yV / mass;
	velocity.x += velocityX;
	velocity.y += velocityY;

}

void Rocket::OnCollision()
{

}
