#pragma once


class PhysicsEngine
{
public:
    PhysicsEngine();
    ~PhysicsEngine();


public: // May the Force be with you
    float forceGrav();
    float forceAeroDrag();
    float forceAeroLift();
    float forceHydroBuoy();
    float forceHydroDrag();

    void step(float dt);
    void detectCollision();
    void solveCollisions();

}TheForce;