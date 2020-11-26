#pragma once
#include "Module.h"
#include "Globals.h"
#include "ModulePlayer.h"
#include "Vectors.h"

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

    Vec2 forceGrav();
    Vec2 forceAeroDrag();
    Vec2 forceAeroLift();
    Vec2 forceHydroBuoy();
    Vec2 forceHydroDrag();

    void step(float dt);
    void detectCollision();
    void solveCollisions();

};