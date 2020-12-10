#pragma once

#include "App.h"
#include "Module.h"
#include "Vectors.h"
#include "Rocket.h"
#include "Body.h"

enum class crossSection
{
    WATER = 0,
    GROUND,
    AIR,
};


class PhysicsEngine : public Module
{
public:

    PhysicsEngine();
    virtual ~PhysicsEngine();    

public:

    bool Start();
    bool PreUpdate();
    bool Update(float dt);
    bool PostUpdate();
    bool CleanUp();

public: // May the Force be with you

    Vec2 forceGrav(float gravity, float mass1, float mass2, float distance, Vec2 direction);
    Vec2 forceAeroDrag(float density, float relativeVelocity, float surface, float dragCoefficient);
    Vec2 forceAeroLift();
    Vec2 forceHydroBuoy();
    Vec2 forceHydroDrag();

    Rocket* createRocket(int posX, int posY, float mass, Vec2 velocity, int health, float fuel);

    void step(float dt);
    void detectCollision();
    void solveCollisions();
    void IntegerVerlet(float* x, Vec2* v, float a, float dt);

    List<Rocket*> rocketsList;
};