#include "GP142.H"
#include "shape.h"
#include <vector>
#pragma once
using namespace std;

class Polygon : public Shape
{
protected:
  int fillColor; // Indicates the color with which the polygon is filled

public:
  Polygon() { fillColor = 0; }

  Polygon(vector<GP142_point> sb, int c, int np, int fc) Shape(sb, c, np)
  {
    fillColor = fc;
  }

  void fill(int color) {} // fills the closed shape with the given color

  void draw()
  {
    for (int i = 0; i + 1 < shapeBox.size(); i++)
      GP142_lineXY(color, shapeBox[i].x, shapeBox[i].y, shapeBox[i + 1].x, shapeBox[i + 1].y, 1);
  }

  bool contains(const GP142_point &p) {}
};
