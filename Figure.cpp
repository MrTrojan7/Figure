#include "Figure.h"

Figure::Figure()
{
	x = y = 0;
	cout << "Figure is created\n";
}

void Point::Draw()
{
	cout << "Point draw\n";
}

void Straight::Draw()
{
	cout << "Straight draw\n";
}
