#include "GP142.H"
#include <vector>
#pragma once
using namespace std;

class Shape
{
protected:
  vector<GP142_point> shapeBox;
  int color; // Boundary color
  int n;     // number of GP142_points

public:
  Shape()
  {
    color = 1; // Set color to white
    n = 0;
  }

  Shape(vector<GP142_point> sb, int c, int np)
  {
    shapeBox.assign(sb.begin(), sb.end());
    color = c;
    n = np;
  }

  virtual void draw() = 0;

  bool contains(const GP142_point &p) {}

  bool GP142_pointLiesOnLine(const GP142_point &a, const GP142_point &b, const GP142_point &c) {}
};
