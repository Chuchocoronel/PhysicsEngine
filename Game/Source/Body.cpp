#include "Body.h"

void Body::AddForce(float df)
{
	
}

void Body::AddMomentum(float xV, float yV)
{

	x += xV * mass;
	y += yV * mass;

}