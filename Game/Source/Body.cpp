#include "Body.h"
#include <math.h>

void Body::AddForce(float df)
{
	
}

void Body::AddMomentum(float xV, float yV)
{
	float velocityX = xV / mass;
	float velocityY = yV / mass;
	v.x += velocityX;
	v.y += velocityY;
	x += v.x;
	y += v.y;
}