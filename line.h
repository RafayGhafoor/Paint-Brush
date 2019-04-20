#include "GP142.H"
#include "openshape.h"
#pragma once
using namespace std;

class Line : public openShape
{

public:
  Line() {}
  void draw()
  {
    GP142_lineXY(color, shapeBox[0].x, shapeBox[0].y, shapeBox[1].x, shapeBox[1].y, 1);
  }
  bool contains(const GP142_point &p);
  void changeColor(int color);
};
