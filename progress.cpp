#include <fstream>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

string DEFAULT_FILENAME = "drawing.pb";

void saveShapes(string filename = DEFAULT_FILENAME) {
  ifstream fin(filename);
  if (!fin.is_open()) {
    cout << "File cannot be opened\n";
    return;
  }
  fin.close();
}

void loadShapes(string filename = DEFAULT_FILENAME) {
  ofstream fin(filename);
  if (!fin.is_open()) {
    cout << "File cannot be opened\n";
    return;
  }
  fin.close();
}

class Panel {};
