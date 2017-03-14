#pragma once

#include "zoo/Zoo.h"
using namespace std;

class Driver {
public:
  static void ShowMenu();
  static void ActivateTour(Zoo &Z);
  static void PrintZoo(Zoo &Z, int x1, int y1, int x2, int y2);
  static void PrintZooWithAnimal(Zoo &Z);
  static void PrintFood(Zoo &Z);
  static void InputZoo(Zoo &Z);
};
