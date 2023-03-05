#include <iostream>
#include "point.h";
#include "point.cpp"
#include <srand>
using namespace std;

point Center(point C[], int n)
{
	float sumx=0;
	float sumy=0;
	for (int i = 0; i < n; i++)
	{
		sumx += C[i].GetX();
		sumy += C[i].GetY();


	}
	point cent(sumx/2.0, sumy/2.0);
	return  cent;
	 

}
void Distance(point C1[5], point C2[5], point p)
{
	point cen1 = Center(C1, 5);
	point cen2 = Center(C2, 5);
	float dist1 = cen1.Distance(p.GetX(), p.GetY());
	float dist2 = cen2.Distance(p.GetX(), p.GetY());
	if (dist1 > dist2)
	{
		cout << "C2 is closer" << endl;

	}
	else
		cout << "C1 is closer";
}

int main()
{
	
	point Clus1[10];
	point Clus2[10];
	for (int i = 0, i < 10; i++)
	{
		srand(time(0));
		Clus1[i].setX(70 + rand % 90);
		Clus1[i].setY(70 + rand % 90);
		Clus2[i].setX(20 + rand % 40);
		Clus2[i].setY(20 + rand % 40);
	}

	point p = (60, 90);
	Distance(Clus1, Clus2, p);


}