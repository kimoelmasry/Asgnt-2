#pragma once
#include <iostream>


class point
{
private:
	float x;
	float y;
public:
	point(float x1, float y1);
		
	void setX(float x1);
	void setY(float y1);
	float GetX();
	float GetY();
	void Display();
	float Distance(float x2, float y2);


	

};

#include "main.cpp"