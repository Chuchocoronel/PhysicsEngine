#pragma once

#include "App.h"
#include "Module.h"
#include "Vectors.h"
#include "Rocket.h"


class PhysicsEngine : public Module
{
public:

    PhysicsEngine();
    virtual ~PhysicsEngine();

public:

    // Our awesome rocket diabloV, made by the best engineers with the help of elDemonioIV
    Rocket elDiabloV;

public:

    bool Start();
    bool PreUpdate();
    bool PostUpdate();
    bool CleanUp();

public: // May the Force be with you

    Vec2 forceGrav();
    Vec2 forceAeroDrag();
    Vec2 forceAeroLift();
    Vec2 forceHydroBuoy();
    Vec2 forceHydroDrag();

    void step(float dt);
    void detectCollision();
    void solveCollisions();

};