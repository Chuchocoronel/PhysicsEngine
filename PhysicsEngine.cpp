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

Vec2 PhysicsEngine::forceGrav()
{
	Vec2 test;
	return test;
}

Vec2 PhysicsEngine::forceAeroDrag()
{
	Vec2 test;
	return test;
}

Vec2 PhysicsEngine::forceAeroLift()
{
	Vec2 test;
	return test;
}

Vec2 PhysicsEngine::forceHydroBuoy()
{
	Vec2 test;
	return test;
}

Vec2 PhysicsEngine::forceHydroDrag()
{
	Vec2 test;
	return test;
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
