#pragma once

#include "furniture_type.h"
#include "attr_type.h"

struct WorkshopInfo {
  FurnitureType SERIAL(furniture);
  string SERIAL(name);
  string SERIAL(verb) = "produces";
  AttrType SERIAL(attr);
  int SERIAL(minAttr) = 1;
  double SERIAL(itemScaling) = 1;
  SERIALIZE_ALL(NAMED(furniture), NAMED(name), OPTION(verb), NAMED(attr), OPTION(minAttr), OPTION(itemScaling))
};
