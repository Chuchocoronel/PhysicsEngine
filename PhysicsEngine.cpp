#include "PhysicsEngine.h"

PhysicsEngine::PhysicsEngine()
{
}

PhysicsEngine::~PhysicsEngine()
{
}

float PhysicsEngine::forceGrav()
{
	return 0.0f;
}

float PhysicsEngine::forceAeroDrag()
{
	return 0.0f;
}

float PhysicsEngine::forceAeroLift()
{
	return 0.0f;
}

float PhysicsEngine::forceHydroBuoy()
{
	return 0.0f;
}

float PhysicsEngine::forceHydroDrag()
{
	return 0.0f;
}

void PhysicsEngine::step(float dt)
{
}

void PhysicsEngine::detectCollision()
{
}

void PhysicsEngine::solveCollisions()
{
}
