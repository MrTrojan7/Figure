#pragma once
#include "AllLibraries.h"
class Figure 
{
protected:
	int x;
	int y;
public:
	Figure()
	{ x = y = 0;cout << "Figure is created\n"; }
	virtual void Area() = 0;
	virtual void Perimeter() = 0;
	virtual void Draw() = 0;
};

class Point : public Figure
{
public:
	virtual void Draw() override { cout << "Point draw\n"; };
	virtual void Area() override { throw "Error! Point is haven't Area!\n"; };
	virtual void Perimeter() override { throw "Error! Point is haven't Perimeter!\n"; };
};

class Straight : public Figure
{
public:
	virtual void Draw() override { cout << "Straight draw\n"; };
	virtual void Area() override { throw "Error! Straight is haven't Area!\n"; };
	virtual void Perimeter() override { throw "Error! Straight is haven't Perimeter!\n"; };
};

class Ellips : public Figure
{
public:
	virtual void Draw() override { cout << "Draw Ellips\n"; };
	virtual void Area() override { cout << "Area Ellips\n"; };
	virtual void Perimeter() override { cout << "Perimeter Ellips\n"; };
};

class Polygon : public Figure
{
public:
	virtual void Draw() override { cout << "Draw Polygon\n"; };
	virtual void Area() override { cout << "Area Polygon\n"; };
	virtual void Perimeter() override { cout << "Perimeter Polygon\n"; };
};

class Circle : public Ellips
{
public:
	virtual void Draw() override { cout << "Draw Circle\n"; };
	virtual void Area() override { cout << "Area Circle\n"; };
	virtual void Perimeter() override { cout << "Perimeter Circle\n"; };
};

class Triangle : public Polygon
{
public:
	virtual void Draw() override { cout << "Draw Triangle'\n"; };
	virtual void Area() override { cout << "Area Triangle\n"; };
	virtual void Perimeter() override { cout << "Perimeter Triangle\n"; };
};

class Quadrilateral : public Polygon
{
public:
	virtual void Draw() override { cout << "Draw Quadrilateral\n"; };
	virtual void Area() override { cout << "Area Quadrilateral\n"; };
	virtual void Perimeter() override { cout << "Perimeter Quadrilateral\n"; };
};

class Ordinary_Acute_Triangle : public Triangle
{
	virtual void Draw() override { cout << "Draw Ordinary_Acute_Triangle\n"; };
	virtual void Area() override { cout << "Area Ordinary_Acute_Triangle\n"; };
	virtual void Perimeter() override { cout << "Perimeter Ordinary_Acute_Triangle\n"; };
};

class Isosceles_Acute_Triangle : public Triangle
{
public:
	virtual void Draw() override { cout << "Draw Isosceles_Acute_Triangle\n"; };
	virtual void Area() override { cout << "Area Isosceles_Acute_Triangle\n"; };
	virtual void Perimeter() override { cout << "Perimeter Isosceles_Acute_Triangle\n"; };
};

class Equilateral_Acute_Triangle : public Triangle
{
public:
	virtual void Draw() override { cout << "Draw Equilateral_Acute_Triangle\n"; };
	virtual void Area() override { cout << "Area Equilateral_Acute_Triangle\n"; };
	virtual void Perimeter() override { cout << "Perimeter Equilateral_Acute_Triangle\n"; };
};

class Ordinary_Obtuse_Triangle : public Triangle
{
public:
	virtual void Draw() override { cout << "Draw Ordinary_Obtuse_Triangle\n"; };
	virtual void Area() override { cout << "Area Ordinary_Obtuse_Triangle\n"; };
	virtual void Perimeter() override { cout << "Perimeter Ordinary_Obtuse_Triangle\n"; };
};

class Isosceles_Obtuse_Triangle : public Triangle
{
public:
	virtual void Draw() override{ cout << "Draw Isosceles_Obtuse_Triangle\n"; };
	virtual void Area() override{ cout << "Area Isosceles_Obtuse_Triangle\n"; };
	virtual void Perimeter() override { cout << "Perimeter Isosceles_Obtuse_Triangle\n"; };
};

class Ordinary_Rectangular_Triangle : public Triangle
{
public: 
	virtual void Draw() override { cout << "Draw Ordinary_Rectangular_Triangle\n"; };
	virtual void Area() override { cout << "Area Ordinary_Rectangular_Triangle\n"; };
	virtual void Perimeter() override { cout << "Perimeter Ordinary_Rectangular_Triangle\n"; };
};

class Isosceles_Right_Angle_Triangle : public Triangle
{
public:
	virtual void Draw() override { cout << "Draw Isosceles_Right_Angle_Triangle\n"; };
	virtual void Area() override { cout << "Area Isosceles_Right_Angle_Triangle\n"; };
	virtual void Perimeter() override { cout << "Perimeter Isosceles_Right_Angle_Triangle\n"; };
};

class Parallelogram : public Quadrilateral
{
public:
	virtual void Draw() override { cout << "Draw Parallelogram\n"; };
	virtual void Area() override { cout << "Area Parallelogram\n"; };
	virtual void Perimeter() override { cout << "Perimeter Parallelogram\n"; };
};

class Trapezoid : public Quadrilateral
{
public:
	virtual void Draw() override { cout << "Draw Trapezoid\n"; };
	virtual void Area() override { cout << "Area Trapezoid\n"; };
	virtual void Perimeter() override { cout << "Perimeter Trapezoid\n"; };
};

class Deltoid : public Quadrilateral
{
public:
	virtual void Draw() override { cout << "Draw Deltoid\n"; };
	virtual void Area() override { cout << "Area Deltoid\n"; };
	virtual void Perimeter() override { cout << "Perimeter Deltoid\n"; };
};

class Rectangle : public Parallelogram
{
public:
	virtual void Draw() override { cout << "Draw Rectangle\n"; };
	virtual void Area() override { cout << "Area Rectangle\n"; };
	virtual void Perimeter() override { cout << "Perimeter Rectangle\n"; };
};

class Rhombus : public Parallelogram
{
public:
	virtual void Draw() override { cout << "Draw Rhombus\n"; };
	virtual void Area() override { cout << "Area Rhombus\n"; };
	virtual void Perimeter() override { cout << "Perimeter Rhombus\n"; };
};

class Square : public Rectangle
{
public:
	virtual void Draw() override { cout << "Draw Square\n"; };
	virtual void Area() override { cout << "Area Square\n"; };
	virtual void Perimeter() override { cout << "Perimeter Square\n"; };
};