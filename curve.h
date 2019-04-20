#include "GP142.H"
#include "openshape.h"
#pragma once
using namespace std;

class Curve : public openShape
{

public:
  Curve() {}
  void draw();
  void contains(const GP142_point &p);
  void changeColor(int color);
};
