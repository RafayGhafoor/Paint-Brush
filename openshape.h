#include "GP142.H"
#include "circle.h"
#include <vector>
#pragma once
using namespace std;

class openShape : public Circle
{
protected:
  bool style; // true if line is solid

public:
  openShape()
  {
    style = 1;
  }
  openShape(vector<GP142_point> sb, int c, int np, int fc, double r, int s) : Circle(sb, c, np, fc, r)
  {
    style = s;
  }

  virtual void changeColor(int color) = 0; // Changes the boundary color
};
