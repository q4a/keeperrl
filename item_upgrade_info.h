#pragma once

#include "util.h"

RICH_ENUM(
    ItemUpgradeType,
    WEAPON,
    ARMOR,
    BALSAM
);

class ItemPrefix;
class ContentFactory;

struct ItemUpgradeInfo {
  vector<string> getDescription(const ContentFactory*) const;
  ItemUpgradeType SERIAL(type);
  HeapAllocated<ItemPrefix> SERIAL(prefix);
  template <class Archive>
  void serialize(Archive& ar1, const unsigned int);
};

