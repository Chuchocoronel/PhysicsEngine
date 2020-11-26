#pragma once

class Body
{

private:

    float x;
    float v;
    float a;
    float f;
    float mass;

public: 
    void AddForce(float df); 
    void AddMomentum(float dv);
};