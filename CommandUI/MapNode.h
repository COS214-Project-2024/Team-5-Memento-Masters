#ifndef MAPNODE_H
#define MAPNODE_H

#include <string>
#include "../FactoryMethod/Building.h"

class MapNode
{
private:
    Building* buildingPtr;
    std::string tileType;
    std::string displayChar;

public:
    MapNode(std::string type, Building* building = nullptr);
    ~MapNode();
    Building* getBuilding() const;
    void setBuilding(Building* newBuilding);
    void clearBuilding();
    std::string getType() const;
    std::string printNode() const;
};

#endif //MAPNODE_H
