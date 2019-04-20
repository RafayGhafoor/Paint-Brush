#include "GP142.H"
#include "shape.h"
#include <vector>
#pragma once

using namespace std;

class Circle : public Shape
{
  int fillColor; // Indicates the color with which the Circle is filled
  double radius;

public:
  Circle()
  {
    fillColor = 1;
    radius = 0.0;
  }

  /*
    c = color
    np = number of points (Shape)
    fc = fill color
    r = radius
    */
  Circle(vector<GP142_point> sb, int c, int np, int fc, double r)
  {
    shapeBox.assign(sb.begin(), sb.end());
    color = c;
    n = np;
    fillColor = fc;
    radius = r;
  }

  void draw()
  {
    GP142_circleXY(color, shapeBox[0].x, shapeBox[0].y, radius);
  }
  void fill(int color);
  bool contains(const GP142_point &p);
};
