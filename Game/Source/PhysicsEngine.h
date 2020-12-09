#pragma once

#include "App.h"
#include "Module.h"
#include "Vectors.h"
#include "Rocket.h"

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

    // Our awesome rocket
    Rocket rocket;
    

public:

    bool Start();
    bool PreUpdate();
    bool PostUpdate();
    bool CleanUp();

public: // May the Force be with you

    Vec2 forceGrav(float gravity, float mass1, float mass2, float distance, Vec2 direction);
    Vec2 forceAeroDrag(float density, float relativeVelocity, float surface, float dragCoefficient);
    Vec2 forceAeroLift();
    Vec2 forceHydroBuoy();
    Vec2 forceHydroDrag();

    void createRocket(int posX, int posY, float mass, float velocity, int health, float fuel);

    void step(float dt);
    void detectCollision();
    void solveCollisions();

};