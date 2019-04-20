#include "GP142.H"
#include "polygon.h"
#pragma once
using namespace std;
class Rectangle : public Polygon
{

public:
  Rectangle() {}
  void draw()
  {
    GP142_rectangleP(color, shapeBox[0], shapeBox[1], 0); // 4th parameter:: backgroundfill -> SET to 0
  }
  bool contains(const GP142_point &p);
  void fill(int color);
};
