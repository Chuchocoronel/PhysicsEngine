#include "PhysicsEngine.h"


PhysicsEngine::PhysicsEngine() : Module()
{

}

PhysicsEngine::~PhysicsEngine()
{
}

bool PhysicsEngine::Start()
{
	return true;
}

bool PhysicsEngine::PreUpdate()
{

	return true;
}

bool PhysicsEngine::Update(float dt)
{
	ListItem<Rocket*>* rock = rocketsList.start;

	IntegerVerlet(&rock->data->x, &rock->data->v, rock->data->a, dt);

	return true;
}

bool PhysicsEngine::PostUpdate()
{
	return true;
}

bool PhysicsEngine::CleanUp()
{
	return true;
}

void PhysicsEngine::IntegerVerlet(float *x, Vec2 *v, float a, float dt)
{
	*x += v->x * dt + 0.5 * a * dt * dt;
	v->x += a * dt;

}

Vec2 PhysicsEngine::forceGrav(float gravity, float mass1, float mass2, float distance, Vec2 direction)
{
	Vec2 forceGravity;

	float gravityFormule = (gravity * (mass1 * mass2) / (distance * distance));

	
	forceGravity.x = direction.x * gravityFormule;
	forceGravity.y = direction.y * gravityFormule;


	return forceGravity;
}

Vec2 PhysicsEngine::forceAeroDrag(float density, float relativeVelocity, float surface, float dragCoefficient)
{
	Vec2 test;

	float aeroDragFormule = 0.5 * density * surface * dragCoefficient;

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

Rocket* PhysicsEngine::createRocket(int posX, int posY, float mass, Vec2 velocity, int health, float fuel)
{
	Rocket *rocket = new Rocket();
	rocket->x = posX;
	rocket->y = posY;
	rocket->mass = mass;
	rocket->v = velocity;
	rocket->health = health;
	rocket->fuel = fuel;

	rocketsList.Add(rocket);

	return rocket;
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
