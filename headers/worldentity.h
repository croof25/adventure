//
// Created by chris on 5/11/21.
//

#ifndef ADVENTURE_WORLDENTITY_H
#define ADVENTURE_WORLDENTITY_H
#include <string>
#include <vector>
/**
 * World Entity
 * Base class from which most things are derived.
 * @param name
 */
class WorldEntity {
public:
    WorldEntity(std::string n) { name = n; }
    std::string getName() { return name; }
protected:
    std::string name;
};
#endif //ADVENTURE_WORLDENTITY_H
