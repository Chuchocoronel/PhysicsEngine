#pragma once
#include "Vectors.h"

class Body
{

public:

    Body(){}

    Body(float _x, float _y, Vec2 _v, float _a, float _f, float _mass) : x(_x), y(_y), v(_v), a(_a), f(_f), mass(_mass) {}

    ~Body()
    {

    }
public:

    float x;
    float y;
    Vec2 v;
    float a;
    float f;
    float mass;

public:

    void AddForce(float df);
    void AddMomentum(float xV, float yV);
};