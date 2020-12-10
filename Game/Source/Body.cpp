#include "Body.h"
#include <math.h>

void Body::AddForce(float df)
{
	
}

void Body::AddMomentum(float xV, float yV)
{
	float velocityX = xV / mass;
	float velocityY = yV / mass;
	velocity.x += velocityX;
	velocity.y += velocityY;
	
}