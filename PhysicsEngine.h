#pragma once
#include "Module.h"
#include "Globals.h"
#include "ModulePlayer.h"
#include "p2Point.h"

class PhysicsEngine : public Module
{
public:
  
    PhysicsEngine(Application* app, bool start_enabled = true);
    virtual ~PhysicsEngine();

public:

    // Our awesome rocket diabloV, made by the best engineers with the help of elDemonioIV
    Rocket elDiabloV;
           
public:

    bool Start();
    update_status PreUpdate();
    update_status PostUpdate();
    bool CleanUp();

public: // May the Force be with you
    float forceGrav();
    float forceAeroDrag();
    float forceAeroLift();
    float forceHydroBuoy();
    float forceHydroDrag();

    void step(float dt);
    void detectCollision();
    void solveCollisions();

};