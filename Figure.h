#pragma once
#include "AllLibraries.h"
class Figure 
{
protected:
	int x;
	int y;
	unsigned int area;
	unsigned int perimeter;
public:
	Figure();
	virtual void Area() = 0;
	virtual void Perimeter() = 0;
	virtual void Draw() = 0;
};

class Point : public Figure
{
public:
	virtual void Draw();
	virtual void Area() {};
	virtual void Perimeter() {};
};

class Straight : public Figure
{
public:
	virtual void Draw();
	virtual void Area() {};
	virtual void Perimeter() {};
};
class Ellips : public Figure
{
	virtual void Draw() { cout << "Draw Ellips\n"; };
	virtual void Area() { cout << "Area Ellips\n"; };
	virtual void Perimeter() { cout << "Perimeter Ellips\n"; };
};

