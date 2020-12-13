#pragma once
#include "Vectors.h"
#include "App.h"
#include "Module.h"

class SDL_Rect;
class Body
{

public:

    Body(){}

    //Body(float _x, float _y, Vec2 _v, float _a, float _f, float _mass) : x(_x), y(_y), v(_v), a(_a), f(_f), mass(_mass) {}

    ~Body()
    {

    }
public:

    Vec2 pos;
    float mass;
    float radius;
   
   
    SDL_Rect *hitbox;

public:

    void AddForce(float df);
};