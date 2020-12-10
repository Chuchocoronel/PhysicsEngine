#include "Body.h"

void Body::AddForce(float df)
{
	
}

void Body::AddMomentum(float xV, float yV)
{
	float velocityX = xV / mass;
	float velocityY = yV / mass;
	x += velocityX;
	y += velocityY;

}