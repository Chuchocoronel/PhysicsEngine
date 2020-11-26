#include "Globals.h"
#include "Application.h"
#include "PhysicsEngine.h"


PhysicsEngine::PhysicsEngine(Application* app, bool start_enabled) : Module(app, start_enabled)
{

}

PhysicsEngine::~PhysicsEngine()
{
}

bool PhysicsEngine::Start()
{
	return false;
}

update_status PhysicsEngine::PreUpdate()
{
	return update_status();
}

update_status PhysicsEngine::PostUpdate()
{
	return update_status();
}

bool PhysicsEngine::CleanUp()
{
	return false;
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
