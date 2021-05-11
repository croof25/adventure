//
// Created by chris on 5/11/21.
//

#ifndef ADVENTURE_ITEM_H
#define ADVENTURE_ITEM_H
#include "worldentity.h"
class Item : public WorldEntity{
public:
    Item(std::string n) : WorldEntity(n) {}
    virtual void use() = 0;
};

class KeyItem : public Item {
public:
    KeyItem(std::string n) : Item(n) { }
};

class HealingItem : public Item {
public:
    HealingItem(std::string n, int pot) : Item(n) { healingPotency = pot; }
    void use(std::vector<void*> );
private:
    int healingPotency;
};

class BattleItem : public Item {

};
#endif //ADVENTURE_ITEM_H
