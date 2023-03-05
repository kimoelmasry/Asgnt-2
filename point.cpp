#include <iostream>
#include "point.h"
#include <cmath>

point::point(float x1, float y1)
{
	x = x1;
	y = y1;
}

float point::GetX()
{
	return x;
}

float point::GetY()
{

	return y;

}

void point::setX(float x1)
{
	x = x1;
}
void point::setY(float y1)
{
	y = y1;
}

void point::Display()
{
	cout << "(" << x << "," << y << ")";
}
float point::Distance(float x2, float y2)
{
	float distance = sqrt(pow(x - x2, 2) - pow(y - y2, 2));
	return distance;


}

